#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list
 * @head: First node in the linked list
 *
 * Return: The sum
 */
int sum_listint(listint_t *head)
{
	int List_Tot = 0;
	listint_t *Hold = head;

	for (; Hold; Hold = Hold->next)
	{
		List_Tot = List_Tot + Hold->n;
	}
	return (List_Tot);
}
