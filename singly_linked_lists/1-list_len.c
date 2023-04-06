#include "lists.h"
/**
 * list_len - Count the amount of nodes in a linked list
 * @h: Said linked list
 *
 * Return: The amount of nodes
 */
size_t list_len(const list_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		cont++;
		h = h->next;
	}
	return (cont);
}
