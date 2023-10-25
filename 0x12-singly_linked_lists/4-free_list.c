#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *current = head;  /* Pointer to track the current node*/
	list_t *next;  /* Pointer to store the next node in the list.*/

	while (current != NULL)
	{
		next = current->next;  /* Store the next node before freeing*/
		free(current->str);  /* Free memory allocated for the string*/
		free(current);  /* Free the memory allocated for the current node.*/
		current = next;  /* Move to the next node in the list.*/
	}
}
