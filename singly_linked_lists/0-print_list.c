#include "lists.h"
/**
 * print_list - Prints a linked list
 * @h: The linked list to print
 *
 * Return: The amount of nodes printed
 */
size_t print_list(const list_t *h)
{
	int cont = 0;

	while (h->next != NULL)
	{
		if (h == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		cont++;
	}
	return (cont);
}
