#include "holberton.h"

int main(void)
{
	size_t size = 0;
	int line_read, i = 0;
	char *buffer = NULL, **arr_str = NULL;


	while (1)
	{
		printf("#cisfun$ ");
		line_read = getline(&buffer, &size, stdin);
		write(STDOUT_FILENO, buffer, line_read);
		arr_str = _token(buffer);
		while (arr_str[i])
		{
			printf("%s\n", arr_str[i]);
			i++;
		}
		i = 0;

	}
	free(arr_str);
	free(buffer);

	return 0;
}