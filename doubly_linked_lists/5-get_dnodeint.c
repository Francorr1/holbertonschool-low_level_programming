#include "lists.h"
/**
 * get_dnodeint_at_index - Gets the node at the INDEX position
 * @head: The list to search
 * @index: The node to get
 *
 * Return: The address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head, *h = head;

	for (; temp->next != NULL; i++)
	{
		temp = temp->next;
	}
	if (index > i)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		h = h->next;
	}
	return (h);
}
