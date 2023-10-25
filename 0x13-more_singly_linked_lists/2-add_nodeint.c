#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: Pointer to the first node
 * @n: New node data
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Created_new_node = malloc(sizeof(listint_t));

	if (!Created_new_node)
	{
		return (NULL);
	}

	Created_new_node->n = n;
	Created_new_node->next = *head;
	*head = Created_new_node;

	return (Created_new_node);
}
