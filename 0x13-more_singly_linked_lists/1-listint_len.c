#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked lists
 * @h: Pointer to tranverse
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t Count_Elements;

	Count_Elements = 0;

	for (; h; h = h->next)
	{
		Count_Elements++; /*increment for list element*/
	}
	return (Count_Elements);
}
