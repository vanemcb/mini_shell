#include "holberton.h"

int main(void)
{
	size_t size = 0;
	int return_get = 0, return_strcmp = 1, mode;
	char *buffer = NULL, **array_input = NULL;

	mode = isatty(0);
	printf("%d\n", mode);
	if (mode == 0)
		_nointeractive();

	while (return_get != EOF)
	{
		printf("#cisfun$ ");
		return_get = getline(&buffer, &size, stdin);

		if (return_get != -1 && buffer[0] != '\n' && buffer[0] != ' ')
		{
			buffer[return_get - 1] = '\0';
			return_strcmp = strcmp(buffer, "exit");
			if (return_strcmp == 0)
			{
				free(buffer);
				exit(0);
			}
			array_input = _token(buffer, " ");
			exe(array_input);
			free(array_input);
		}
	}
	free(buffer);
	printf("\n");
	return 0;
}