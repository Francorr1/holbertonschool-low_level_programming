#include "lists.h"
/**
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *temp = *head;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
	{
		return (NULL);
	}
	return (new);
}
