#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @str: input string
 * Return: string length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
