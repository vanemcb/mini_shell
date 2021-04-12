#include "holberton.h"

/**
* exe - Executes an input command if it exists.
* @argv: Double pointer that contains input arguments.
* Return: void.
*/

void exe(char **argv)
{
	pid_t re_fork;
	int status, re_stat, f = 0;
	struct stat st;

	if (argv[0][0] != '/')
	{
		argv[0] = _pathcat(argv[0]);
		if (argv[0][0] == 'n')
			re_stat = -1;
		else
		{
			re_stat = 0;
			f = 1;
		}
	}
	else
	{
		re_stat = stat(argv[0], &st);
		if (re_stat == -1)
			perror(argv[0]);
	}
	if (re_stat == 0)
	{
		re_fork = fork();
		if (re_fork == -1)
			exit(EXIT_FAILURE);
		else if (re_fork == 0)
			if (execve(argv[0], argv, NULL) == -1)
				exit(EXIT_FAILURE);
	}
	wait(&status);

	/* Free para liberar argv[0] si se entra al primer if*/
	if (f == 1)
		free(argv[0]);
}
