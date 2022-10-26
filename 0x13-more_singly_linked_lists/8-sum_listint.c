#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: the head
 *
 * Return: the sum of all the data or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int i = 0;

	temp = malloc(sizeof(listint_t));
	/*if (temp == NULL)
		return (NULL);*/
	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		i += temp->n;
		temp = temp->next;
	}

	return (i);
}
