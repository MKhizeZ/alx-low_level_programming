	#include "lists.h"
 
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t List_Size = 0;
	listint_t *current, *next;
 
	if (!h || !*h)
	{
		return (0);
	}
 
	current = *h;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
		List_Size++;
		if (current == *h)
		{
			break;
		}
	}
 
	*h = NULL;
 
	return (List_Size);
}
