#include "holberton.h"

/**
* _strcmp - function that compares two strings.
* @s1: string 1.
* @s2: string 2.
* Return: 0, positive or negative.
*/

int _strcmp(char *s1, char *s2)
{
	int n1 = 0, r, i;

	while (s1[n1] != '\0')
		n1++;

	for (i = 0; i < n1; i++)
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
