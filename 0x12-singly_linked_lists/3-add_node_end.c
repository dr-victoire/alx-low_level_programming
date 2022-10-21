#include "lists.h"

/**
 * add_node_end - adds a node to the end of a list
 * @head: the head
 * @str: the string to be added
 *
 * Return: the address of the new element or NULL (Failure)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;

	return (newNode);
}
