#include "holberton.h"

/**
* space - Detecs if a string has only whitespaces.
* @str: input string.
* Return: 1 if valid character is found, or 0 if only whitespaces are found.
*/

int space(char *str)
{
	int i = 0;

	while (str[i])
	{
		if(str[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}
