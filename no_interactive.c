#include "holberton.h"

void _nointeractive()
{
	char buffer[1024], **array_input = NULL, **array_line_input = NULL;
	int return_read, i = 0, return_built;

	return_read = read(0, buffer, 1024);
	buffer[return_read] = '\0';

	array_input = _token(buffer, "\n");

	while (array_input[i])
	{
		return_built = _builtincalls(array_input[i]);
		if (return_built == 0)
		{
			array_line_input = _token(array_input[i], " ");
			exe(array_line_input);
			free(array_line_input);
		}
		i++;
	}
}
