#include "holberton.h"

/**
* main - Check for shell mode and execute one of these.
* Return: 0.
*/

int main(void)
{
	int mode, re_mode;

	mode = isatty(0);

	if (mode == 0)
	{
		re_mode = _nointeractive();
		return (re_mode);
	}
	else
	{
		re_mode = _interactive();
		return (re_mode);
	}
	return (0);
}
