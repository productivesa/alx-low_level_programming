#include "lists.h"

/**
 * print_dlistint - prints allall element
 * @h: the head of the dlist
 * Return: he number of nodes in the list
 */
size_t print_distint(const distint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		print("%d\n", h->n);
		h = h->next;
	}
	return (nodes)
}
