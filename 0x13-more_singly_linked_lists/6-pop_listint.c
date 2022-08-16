#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of list
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int headnode;

	listint_t *new;

	if (*head == NULL)
		return (0);
	headnode = (*head)->n;
	new = *head;
	*head = (*head)->next;
	free(new);
	return (headnode);
}
