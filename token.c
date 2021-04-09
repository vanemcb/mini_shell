#include "holberton.h"

char **_token(char *str, char *sep)
{
	char *token_cp = NULL, *str_dup = NULL, *token = NULL;
	char **array_input = NULL;
	int i = 0, x = 0;

	/*Debemos hacer nuestra propia función strdup*/
	str_dup = strdup(str);
	token_cp = strtok(str_dup, sep);
	while (token_cp)
	{
		token_cp = strtok(NULL, sep);
		x++;
	}
	array_input = malloc(sizeof(char *) * (x + 1));
	token = strtok(str, sep);
	while (token != NULL)
	{
		array_input[i] = token;
		token = strtok(NULL, sep);
		i++;
	}
	array_input[i] = NULL;
	free(str_dup);
	return (array_input);
}