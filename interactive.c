#include "holberton.h"

/**
* _interactive - Executes the shell interactive mode.
* Return: void.
*/

void _interactive(void)
{
	size_t size = 0;
	int re_get = 0, re_built;
	char *buffer = NULL, **array_input = NULL;

	while (re_get != EOF)
	{
		if (write(STDOUT_FILENO, "#cisfun$ ", 9) == -1)
			exit(EXIT_FAILURE);

		re_get = getline(&buffer, &size, stdin);

		if (re_get != -1 && buffer[0] != '\n')
		{
			buffer[re_get - 1] = '\0';

			re_built = _builtincalls(buffer);

			if (re_built == 0)
			{
				array_input = _token(buffer, " ");
				exe(array_input);
				free(array_input);
			}
		}
	}
	free(buffer);
	if (write(STDOUT_FILENO, "\n", 1) == -1)
		exit(EXIT_FAILURE);
}
