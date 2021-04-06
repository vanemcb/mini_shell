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

		if (line_read != -1)
		{
			buffer[line_read - 1] = '\0';
			re_strcmp = strcmp(buffer, "exit");

			if (re_strcmp == 0)
				break;

			/*write(STDOUT_FILENO, buffer, line_read);*/
			arr_str = _token(buffer);
			exe(arr_str);

			/*while (arr_str[i])
			{
				printf("%s\n", arr_str[i]);
				i++;
			}
			i = 0;*/
			free(arr_str);
		}
	}

	free(buffer);
	return 0;
}