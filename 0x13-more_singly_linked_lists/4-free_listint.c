#include "lists.h"
/**
 * free_listint - entry point
 * @head: head of list to be freed
 *
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
