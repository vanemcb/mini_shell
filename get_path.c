#include "holberton.h"

list_t *_getpath(char *str)
{
	char *token = NULL;
	list_t *head = NULL;

	token = strtok(str, ":");
	while (token != NULL)
	{
		add_node_end(&head, token);
		token = strtok(NULL, ":");
	}
	return(head);
}
