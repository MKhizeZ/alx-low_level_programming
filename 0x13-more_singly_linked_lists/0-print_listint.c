#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the listint_t list to print
 *
 * Return: The number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t Init_len = 0;

	while (h)
	{
		printf("%d\n", h->n); /*output number of elements*/
		h = h->next; /*Counts from head to end of element*/
		Init_len++;
	}

	return (Init_len);
}
