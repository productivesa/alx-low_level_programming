#include "lists.h"
/**
 * sum_listint - returns sum of all data
 * @head: head of a list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
