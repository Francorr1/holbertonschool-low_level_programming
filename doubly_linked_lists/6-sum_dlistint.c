#include "lists.h"
/**
 * sum_slistint - Sums all the n values of a linked list
 * @head: Said linked list
 *
 * Return: The rsult of the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h = head;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		sum += h->n;
	}
	return (sum);
}
