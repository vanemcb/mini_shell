#include "holberton.h"
/*extern char **environ;*/

char *_getpath(char *name)
{
	int i = 0, len = 0;
	char *path = NULL;

	while (name[len])
		len++;

	while (environ[i])
	{
		if (_strncmp(environ[i], name, len) == 0)
		{
			path = environ[i] + (len + 1);
			break;
		}
		i++;
	}
	return (path);
}
