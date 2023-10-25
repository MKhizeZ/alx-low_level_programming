#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node in a linked list,
 * at a given position
 * @head: Pointer to the first node in the list
 * @idx: The new node index
 * @n: New node data
 *
 * Return: New node pointer, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int iter;
	listint_t *new_node, *Hold;

	if (!head)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	Hold = *head;
	for (iter = 0; Hold && iter < idx - 1; iter++)
	{
		Hold = Hold->next;
	}

	if (iter == idx - 1)
	{
		new_node->next = Hold->next;
		Hold->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
