#include "lists.h"
/**
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	temp = *head;
	new = malloc(sizeof(list_t));
	if (new)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
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
