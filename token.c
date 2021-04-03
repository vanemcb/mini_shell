#include "holberton.h"

char **_token(char *str)
{
	char *token_cp, *str_dup, *token;
	char **arr_str;
	int i = 0, x = 0;

	str_dup = strdup(str);
	token_cp = strtok(str_dup, " ");
	while (token_cp)
	{
		token_cp = strtok(NULL, " ");
		x++;
	}
	arr_str = malloc(sizeof(char *) * (x + 1));
	token = strtok(str, " ");
	while (token != NULL)
	{
		arr_str[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	arr_str[i] = NULL;
	free(str_dup);
	return (arr_str);
}