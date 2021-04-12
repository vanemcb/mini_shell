#include "holberton.h"

/**
* _pathcat - Concatenates the command @cmd with the PATH directories.
* @cmd: Input command.
* Return: Pointer to concatenated path if it exists or 'n'
* if it doesn't exist.
*/

char *_pathcat(char *cmd)
{
	int i = 0, re_stat;
	char *path_cat = NULL, **split_path = NULL, *path = NULL;
	struct stat st;

	path = _strdup(_getpath("PATH"));
	split_path = _token(path, ":");
	while (split_path[i])
	{
		path_cat = _strcat(split_path[i], cmd);
		re_stat = stat(path_cat, &st);
		if (re_stat == 0)
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
