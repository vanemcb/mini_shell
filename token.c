#include "holberton.h"

char **_token(char *str, char *sep)
{
	char *token_cp = NULL, *str_dup = NULL, *token = NULL;
	char **arr_str = NULL;
	int i = 0, x = 0;

	str_dup = strdup(str);
	token_cp = strtok(str_dup, sep);
	while (token_cp)
	{
		token_cp = strtok(NULL, sep);
		x++;
	}
	arr_str = malloc(sizeof(char *) * (x + 1));
	token = strtok(str, sep);
	while (token != NULL)
	{
		arr_str[i] = token;
		token = strtok(NULL, sep);
		i++;
	}
	arr_str[i] = NULL;
	free(str_dup);
	return (arr_str);
}