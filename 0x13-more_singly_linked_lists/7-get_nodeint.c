#include "lists.h"
/**
 * get_nodeint_at_index - get the node
 * @head: head of list
 * @index: index of the node
 * Return: null if node not exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
		{
			return (NULL)
		}
		else
		{
			i++;
			head = head->next;
		}
	}
	return (head);
}
