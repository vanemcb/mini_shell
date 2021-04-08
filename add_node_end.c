#include "holberton.h"

list_t *add_node_end(list_t **head, char *str)
{
	list_t *i_node = *head, *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->string = str;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		while (i_node->next)
			i_node = i_node->next;
		i_node->next = new_node;
	}
	return (*head);
}