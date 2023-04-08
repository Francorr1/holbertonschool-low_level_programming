#include "lists.h"
/**
 * dlistint_len - Counts the amount of nodes in a list
 * @h: Said list
 *
 * Return: The amount of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
