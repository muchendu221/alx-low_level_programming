#include "lists.h"
/**
 * listint_len - Entry point
 * @h: Point to elements in the list
 *
 * Return: Number elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
