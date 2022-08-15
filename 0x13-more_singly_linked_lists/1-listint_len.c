#include "lists.h"
/**
 * listint_len - returns thee number of elements in a linked list
 * @h: head of a list
 * Return: number of nides
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
