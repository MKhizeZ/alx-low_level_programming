#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: First element pointer
 *
 * Return: Element data that was deleted, otherwise 0
 */
int pop_listint(listint_t **head)
{
	if (!head || !*head)
	{
		return (0);
	}

	int Count = (*head)->n;
	listint_t *Hold = (*head)->next;

	free(*head);
	*head = Hold;

	return (Count);
}
