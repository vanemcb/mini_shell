#include "holberton.h"
/*extern char **environ;*/

char *_getenv(char *name)
{
	int i = 0, len = 0;
	char *path = NULL;

	while (name[len])
		len++;

	while (environ[i])
	{
		/*Debemos reemplazar strncmp por nuestra propia función ------------------------------------*/
		if (strncmp(environ[i], name, len) == 0)
		{
			path = environ[i] + (len + 1);
			break;
		}
		i++;
	}
	return (path);
}
