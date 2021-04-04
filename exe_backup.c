#include "holberton.h"
#include <sys/wait.h>

int main(void)
{
	pid_t return_f;
	int status, i;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
	{
		return_f = fork();

		if (return_f == 0)
		{
			printf("Soy el hijo %d y mi padre es %d\n", getpid(), getppid());
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error:");
			exit(0);
		}
		wait(&status);
		printf("Soy el padre: %d \n", getpid());
	}
	return (0);
}