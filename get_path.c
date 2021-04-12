#include "holberton.h"

/**
* _getpath - Get the value of the enviroment variable @name.
* @name: The name of the enviroment variable.
* Return: Pointer to value of the enviroment variable.
*/

char *_getpath(char *name)
{
	int i = 0, len = 0;
	char *path = NULL;

	while (name[len])
		len++;

	while (environ[i]) /* environ is a GLOBAL var */
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
