#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: Said list
 * @n: The value to store in the new node
 *
 * Return: The address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	while (head =! NULL)
	{
		(*head) = (*head)->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->prev = *head;
		new->next = NULL;
		(*head)->next = new;
	}
	else
	{
		return (NULL);
	}
	return (new);
}
