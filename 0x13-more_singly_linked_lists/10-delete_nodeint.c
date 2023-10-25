#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in a linked list at a certain index
 * @head: Pointer to the first element in the list
 * @index: Indexed node to delete
 *
 * Return: 1 on Success, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *NewNode = *head;
	listint_t *hold = NULL;
	unsigned int iter;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *hold = *head;
		*head = (*head)->next;
		free(hold);
		return (1);
	}

	for (iter = 0; iter < index - 1; iter++)
	{
		if (!NewNode || !(NewNode->next))
		{
			return (-1);
		}
		NewNode = NewNode->next;
	}

	hold = NewNode->next;
	NewNode->next = hold->next;
	free(hold);

	return (1);
}
