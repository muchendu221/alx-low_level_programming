#include "lists.h"

/**
 * free_listint2 - entry point
 * @head: Start of list
 *
 * Return: always 0
 */
void free_listint2(listint_t **head);
{
	listint_t *temp;

	while ((*head) != NULL)
	{
		temp = (*head)->next;
		(*head) = NULL;
		(*head) = temp;
	}
}
