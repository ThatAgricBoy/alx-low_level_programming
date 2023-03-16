#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	if (index > 0 || current == NULL)
	return (NULL);

	return (current);
}
