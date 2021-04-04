#include "holberton.h"

int main(void)
{
	size_t size = 0;
	int line_read, re_strcmp = 1, i = 0;
	char *buffer = NULL, *ex = "exit", **arr_str = NULL;

	while (1)
	{
		printf("$ ");
		line_read = getline(&buffer, &size, stdin);
		re_strcmp = strncmp(buffer, ex, 4);
		if (re_strcmp == 0)
			break;
		write(STDOUT_FILENO, buffer, line_read);
		arr_str = _token(buffer);

		while (arr_str[i])
		{
			printf("%s\n", arr_str[i]);
			i++;
		}
		printf("%d\n", i);

	}
	free(arr_str);
	free(buffer);

	return 0;
}