#include "holberton.h"
#include <sys/wait.h>

void exe(char **argv)
{
	pid_t return_fork;
	int status, return_stat, f = 0;
	struct stat st;

	if (argv[0][0] != '/')
	{
		argv[0] = _pathcat(argv[0]);
		if (argv[0][0] == 'n')
			return_stat = -1;
		else
		{
			return_stat = 0;
			f = 1;
		}
	}
	else
		return_stat = stat(argv[0], &st);

	if (return_stat == 0)
	{
		return_fork = fork();
		if (return_fork == 0)
			execve(argv[0], argv, NULL);
	}
	else
		perror("shell");
	wait(&status);

	/* Free para liberar argv[0] si se entra al primer if */
	if (f == 1)
		free(argv[0]);
}