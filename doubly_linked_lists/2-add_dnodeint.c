#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the start of a list
 * @head: The head of said list
 * @n: The value to store in the new node
 *
 * Return: The address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (n == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		*head = new;
	}
	else
	{
		return (NULL);
	}
	return (new);
}
