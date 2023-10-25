#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: Free listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *Temporary_hold;

	while (head)
	{
		Temporary_hold = head->next; /*Moves head*/
		free(head);
		head = Temporary_hold;
	}
}
