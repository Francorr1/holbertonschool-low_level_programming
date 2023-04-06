#include "lists.h"
/**
 * add_node - Adds a node to a linked list
 * @head: The first node in the list
 * @str: What to put on the new node
 *
 * Return: A pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;
		*head = new;
	}
	else
	{
		return (NULL);
	}
	return (new);
}
