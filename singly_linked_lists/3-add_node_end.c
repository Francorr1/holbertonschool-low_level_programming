#include "lists.h"
/**
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new)
	{
		while (head->next != NULL)
		{
			head = head->next;
		}
		head->next = *new;
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;
	}
	else
	{
		return (NULL);
	}
	return (new);
}
