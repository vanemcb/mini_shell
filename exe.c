#include "holberton.h"
#include <sys/wait.h>

void exe(char **argv)
{
	pid_t return_fork;
	int status, return_stat;
	char **split_path = NULL, *path = NULL;
	struct stat st;

	if (argv[0][0] != '/')
	{
		path = strdup(_getenv("PATH"));
		split_path = _token(path, ":");
		argv[0] = _concpath(split_path, argv[0]);
		if (argv[0][0] == 'n')
			return_stat = -1;
		return_stat = 0;
		free(split_path);
		free(path);
	}
	else
		return_stat = stat(argv[0], &st);

	if (return_stat == 0)
	{
		return_fork = fork();
		if (return_fork == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
				exit(0);
			}
		}
	}

	wait(&status);
	/*free(argv[0]);*/
}