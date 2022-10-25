#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the head
 * @idx: the position where the new node will be inserted
 * @n: the int to be inserted
 *
 * Return: the address of the new node or NULL (Failure)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	temp = *head;

	for (i = 0; i < idx; i++)
	{
		if (temp->next != NULL)
			temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
