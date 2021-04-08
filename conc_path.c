#include "holberton.h"

char *_concpath(char **split_path, char *cmd)
{
	int i = 0/*, x = 0*/;
	char *path_cat = NULL;
	struct stat st;

	while (split_path[i])
	{
		path_cat = _strcat(split_path[i], cmd);
		if (stat(path_cat, &st) == 0)
		{
			printf("%s: FOUND\n", path_cat);
			return (path_cat);
		}
		free(path_cat);
		i++;
	}
	return ("n");
}
