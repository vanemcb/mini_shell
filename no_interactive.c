#include "holberton.h"

/**
* _nointeractive - Executes the Shell no interactive mode.
* Return: void.
*/

int _nointeractive(void)
{
	char buffer[1024], **array_input = NULL, **array_line_input = NULL;
	int re_read, i = 0, re_built = 0, re_exe = 0, re_space;

	re_read = read(0, buffer, 1024);
	if (re_read == -1)
		exit(EXIT_FAILURE);

	buffer[re_read] = '\0';

	array_input = _token(buffer, "\n");

	while (array_input[i])
	{
		re_built = _builtincalls(array_input[i]);
		re_space = space(array_input[i]);

		if (re_built == 0 && re_space == 1)
		{
			array_line_input = _token(array_input[i], " ");
			re_exe = exe(array_line_input);
			free(array_line_input);
		}
		i++;
	}
	free(array_input);
	return (re_exe);
}
