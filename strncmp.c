#include "holberton.h"

/**
* _strncmp - function that compares n characters of two strings.
* @s1: string 1.
* @s2: string 2.
* @n: number of characters to compare.
* Return: 0, positive or negative.
*/

int _strncmp(char *s1, char *s2, int n)
{
	int r, i;

	for (i = 0; i < n; i++)
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
			r = 0;
	}
	return (r);
}
