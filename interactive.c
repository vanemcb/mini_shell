#include "holberton.h"

void _interactive()
{
	size_t size = 0;
	int return_get = 0, return_built;
	char *buffer = NULL, **array_input = NULL;

	while (return_get != EOF)
	{
		if(write(STDOUT_FILENO, "#cisfun$ ", 9) == -1)
			exit(EXIT_FAILURE);

		return_get = getline(&buffer, &size, stdin);
		if (return_get == -1)
		{
			free(buffer);
			exit(EXIT_FAILURE);
		}

		if (return_get != -1 && buffer[0] != '\n' && buffer[0] != ' ')
		{
			buffer[return_get - 1] = '\0';

			return_built = _builtincalls(buffer);

			if (return_built == 0)
			{
				array_input = _token(buffer, " ");
				exe(array_input);
				free(array_input);
			}
		}
	}
	free(buffer);
	if(write(STDOUT_FILENO, "\n", 1) == -1)
		exit(EXIT_FAILURE);
}
