#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index in a linked list
 * @head: First node in the list
 * @index: Node index
 *
 * Return: Pointer to the search node, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iter;
	for (iter = 0; head != NULL && iter < index; iter++)
	{
		head = head->next;
	}
	return (head);
}
