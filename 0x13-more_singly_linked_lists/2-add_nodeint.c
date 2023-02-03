#include "lists.h"

/**
 * add_nodeint - entry point
 *@head: list to fill
 *@n: Element to add to the list
 *
 * Return: new head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* pointer to new node*/
	listint_t *new_n;
	/*Allocate memory to new_n*/
	new_n = (listint_t *) malloc(sizeof(listint_t));
	/*if fialis allocate NULL */
	if (new_n == NULL)
		return (NULL);
	/*Enter data to a new node*/
	new_n->n = n;
	new_n->next = (*head);
	(*head) = new_n;
	return ((*head));
}
