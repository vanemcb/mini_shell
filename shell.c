#include "holberton.h"

int main(void)
{
	size_t size = 0;
	int line_read = 0, re_strcmp = 1;
	char *buffer = NULL, **arr_str = NULL;

	while (line_read != EOF)
	{
		printf("#cisfun$ ");
		line_read = getline(&buffer, &size, stdin);

		if (line_read != -1 && buffer[0] != '\n' && buffer[0] != ' ')
		{
			buffer[line_read - 1] = '\0';
			re_strcmp = strcmp(buffer, "exit");

			if (re_strcmp == 0)
				break;
			arr_str = _token(buffer, " ");
			exe(arr_str);
			free(arr_str);
		}
	}
	free(buffer);
	return 0;
}