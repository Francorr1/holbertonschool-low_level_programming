#include "lists.h"
/**
 * print_dlistint - Prints a double linked list and returns the amount of nodes printed
 * @h: The list to be printed and counted
 *
 * Return: The amount of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
