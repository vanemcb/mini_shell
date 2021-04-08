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
	}
	else
		return_stat = stat(argv[0], &st);

	if (argv[0][0] != 'n')
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

	free(path);
	free(split_path);
	free(argv[0]);
}