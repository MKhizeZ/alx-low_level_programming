#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: First element pointer
 *
 * Return: Element data that was deleted, otherwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *Hold = (*head)->next;
	int Count = (*head)->n;

	if (!head || !*head)
	{
		return (0);
	}

	free(*head);
	*head = Hold;

	return (Count);
}
