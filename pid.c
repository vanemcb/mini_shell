#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t my_pid, my_pid2;

	my_pid = getpid();
	my_pid2 = getppid();
	printf("%u, %u\n", my_pid, my_pid2);
	return (0);
}