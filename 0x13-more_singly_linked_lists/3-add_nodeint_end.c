#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a linked list
 * @head: Pointer to the first element
 * @n: New element data
 *
 * Return: The new node pointer, otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Allocate memory for the new node*/
	listint_t *created_new_node = malloc(sizeof(listint_t));

	if (!created_new_node)
	{
		/* Return NULL if memory allocation fails*/
		return (NULL);
	}

	/* Assign the value and next pointer of the new node*/
	created_new_node->n = n;
	created_new_node->next = NULL;

	/* If the linked list is empty, make the new node the head*/
	if (*head == NULL)
	{
		*head = created_new_node;
		return (created_new_node);
	}

	/* Traverse the linked list to find the last node*/
	listint_t *temp_node = *head;

	while (temp_node->next)
	{
		temp_node = temp_node->next;
	}

	/* Append the new node to the end of the linked list*/
	temp_node->next = created_new_node;
	return (created_new_node);
}
