#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *store = *head;
	list_t *new_node = malloc(sizeof(list_t));
	/*Check if memory allocation was successful. If not, return NULL*/
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* checks if the head pointer is NULL,*/
	/* assign the new node to head and return the new node*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/*Checks the linked list using store until the last node is reached*/
	while (store->next)
	{
		store = store->next;
	}
	store->next = new_node;
	return (new_node);
}
