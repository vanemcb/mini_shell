#include <stdio.h>
#include <unistd.h>

int main()
{
	int r;
	r = isatty(0);
	printf("%d", r);
	return(0);
}