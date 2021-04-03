#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	int r, line_read;
	size_t size = 1;
	char *str1 = "exit", *buffer = malloc(size);

	line_read = getline(&buffer, &size, stdin);
	buffer[line_read - 1] = '\0';
	r = strcmp(buffer, str1);

	printf("%d\n", r);

	return (0);
}