#include "lists.h"
/**
 * free_list - Frees a linked list from memory
 * @head: Said linked list
 */
void free_list(list_t *head)
{
	list_t temp = NULL;

	if (head)
	{
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
	}
}
