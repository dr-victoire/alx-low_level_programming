#include "lists.h"

/**
 * main - checks code
 *
 * Return: 0
 */

int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Alexia");
	add_node(&head, "Triple H");
	add_node(&head, "Randy Ortorn");
	add_node(&head, "Batista");
	add_node(&head, "Ric Flair");

	print_list(head);

	return (0);
}
