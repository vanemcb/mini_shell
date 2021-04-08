#include "holberton.h"

size_t print_list(const list_t *h)
{
	unsigned int size = 0;

	while (h)
	{
		printf("%s\n", h->string);
		h = h->next;
		size++;
	}
	return (size);
}