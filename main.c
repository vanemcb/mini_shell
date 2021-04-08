#include "holberton.h"

int main(void)
{
	char *path = NULL, **split_path = NULL, *path_conc = NULL;


	path = _getenv("PATH");
	split_path = _token(path, ":");
	path_conc = _concpath(split_path, "ls");
	printf("%s\n", path_conc);
	/*free(path_conc);*/
	free(split_path);
	return (0);
}