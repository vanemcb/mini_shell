#include "holberton.h"

char *_concpath(char *cmd)
{
	int i = 0;
	char *path_cat = NULL, **split_path = NULL, *path = NULL;
	struct stat st;

	path = strdup(_getenv("PATH"));
	split_path = _token(path, ":");
	while (split_path[i])
	{
		path_cat = _strcat(split_path[i], cmd);
		if (stat(path_cat, &st) == 0)
		{
			printf("%s: FOUND\n", path_cat);
			free(split_path);
			free(path);
			return (path_cat);
		}
		free(path_cat);
		i++;
	}
	free(split_path);
	free(path);
	return ("n");
}
