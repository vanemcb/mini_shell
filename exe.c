#include "holberton.h"
#include <sys/wait.h>

void exe(char **argv)
{
	pid_t return_fork;
	int status;

	return_fork = fork();
	if (return_fork == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error:");
			exit(0);
		}
	}
	wait(&status);
}