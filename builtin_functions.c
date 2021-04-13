#include "holberton.h"

/**
* _builtincalls - Check and execute the built-in's functions.
* @str: input built-in command.
* Return: 1 if str is a built-in command,
* 0 if str isn't a built-in command.
*/

int _builtincalls(char *str)
{
	int i = 0, len;
	char *built_ins[] = {"exit", "env", NULL};
	int num_built_ins[] = {1, 2, 0};

	while (built_ins[i])
	{
		/* implementar nuestro propio strcmp*/
		if (!_strcmp(str, built_ins[i]))
			break;
		i++;
	}

	switch (num_built_ins[i])
	{
	case 1:
		if (isatty(0) == 0)
			return (1);
		else
		{
			free(str);
			exit(0);
		}
	case 2:
		i = 0;
		while (environ[i])
		{
			len = _strlen(environ[i]);
			if (write(STDOUT_FILENO, environ[i], len) == -1)
				exit(EXIT_FAILURE);
			if (write(STDOUT_FILENO, "\n", 1) == -1)
				exit(EXIT_FAILURE);
			i++;
		}
		return (1);
	}
	return (0);
}
