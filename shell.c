#include "holberton.h"

/**
* main - Check for shell mode and execute one of these.
* Return: 0.
*/

int main(void)
{
	int mode;

	mode = isatty(0);

	if (mode == 0)
		_nointeractive();
	else
		_interactive();
	return (0);
}
