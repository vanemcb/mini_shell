#include "holberton.h"

char *_strcat(char *str1, char *str2)
{
	int i = 0, j = 0, x, z;
	char *strcat = NULL;

	while (str1[i])
		i++;
	while (str2[j])
		j++;

	strcat = malloc(sizeof(char) * (i + j + 2));
	if(!strcat)
		return(NULL);

	for (x = 0; x < i; x++)
		strcat[x] = str1[x];
	strcat[x] = '/';
	for (z = 0; x <= (i + j); z++, x++)
		strcat[x + 1] = str2[z];

	return (strcat);
}
