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
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *Hold = *head;

		*head = (*head)->next;
		free(Hold);
		return (1);
	}

	listint_t *NewNode = *head;
	unsigned int iter;

	for (iter = 0; iter < index - 1; iter++)
	{
		if (!NewNode || !(NewNode->next))
		{
			return (-1);
		}
		NewNode = NewNode->next;
	}

	listint_t *Hold = NewNode->next;

	NewNode->next = Hold->next;
	free(Hold);

	return (1);
}
