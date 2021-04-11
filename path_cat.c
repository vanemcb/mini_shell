#include "holberton.h"

char *_pathcat(char *cmd)
{
	int i = 0, return_stat;
	char *path_cat = NULL, **split_path = NULL, *path = NULL;
	struct stat st;

	path = strdup(_getpath("PATH"));
	split_path = _token(path, ":");
	while (split_path[i])
	{
		path_cat = _strcat(split_path[i], cmd);
		return_stat = stat(path_cat, &st);
		if (return_stat == 0)
		{
			free(split_path);
			free(path);
			return (path_cat);
		}
		free(path_cat);
		i++;
	}
	free(split_path);
	free(path);
	perror(cmd);
	return ("n");
}
