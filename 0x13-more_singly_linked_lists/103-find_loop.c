#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL)
	{
		return (NULL);
	}

	listint_t *Begin = head;
	listint_t *End = head;

	while (End != NULL && End->next != NULL)
	{
		Begin = Begin->next;
		End = End->next->next;

		if (Begin == End)
		{
			Begin = head;
			while (Begin != End)
			{
				Begin = Begin->next;
				End = End->next;
			}
			return (End);
		}
	}
	return (NULL);
}
