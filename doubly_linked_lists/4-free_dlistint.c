#include "lists.h"
/**
 * free_dlistint - Frees a linked list
 * @head: The list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head)
	{
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp->n);
			free(temp);
		}
	}
}
