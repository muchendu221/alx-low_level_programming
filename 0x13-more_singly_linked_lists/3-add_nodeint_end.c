#include "lists.h"
/**
 * add_nodeint_end - entry point
 * @head: start of list
 * @n: Element to added to the list
 *
 * Return: last element added to the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*New element*/
	listint_t *new_n;

	/* allocating memory*/
	new_n = (listint_t *) malloc(sizeof(listint_t));
	/* in case allocation failed*/
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;
	/* if list id empty end == start*/
	if ((*head) == NULL)
	{
		(*head) = new_n;
		return ((*head));
	}
	while ((*head)->next != NULL)
		(*head) = (*head)->next;
	(*head)->next = new_n;
	return ((*head));
}
