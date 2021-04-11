#include "holberton.h"

int _builtincalls(char *str)
{
	int i = 0, len;
	char *built_ins[] = {"exit", "env", NULL};
	int num_built_ins[] = {1,2,0};

	while (built_ins[i])
	{
		/* implementar nuestro propio strcmp*/
		if(!strcmp(str, built_ins[i]))
			break;
		i++;
	}

	switch (num_built_ins[i])
	{
	case 1:
		free(str);
		exit(0);
	case 2:
		i = 0;
		while (environ[i])
		{
			/* Implementar nuestro propio strlen */
			len = strlen(environ[i]);
			write(STDOUT_FILENO, environ[i], len);
			write(STDOUT_FILENO, "\n", 1);
			i++;
		}
		return(1);
	}
	return(0);
}
