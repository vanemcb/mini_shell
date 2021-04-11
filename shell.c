#include "holberton.h"

int main(void)
{
	int mode;

	mode = isatty(0);

	if (mode == 0)
		_nointeractive();
	else
		_interactive();
	return 0;
}
