#include "lists.h"
/**
  * add_dnodeint - Adds a new node at the beginning
  * @head: head of list
  * @n: value  of the element
  * Return: address of new element
 */
distinct_t *add_dnodeint(dlistint_t **head, const int n)
{
	distint_t *new;
	distint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	if (h != NULL)
		h->prev = new;
	*head = new;
	return (new);
}
