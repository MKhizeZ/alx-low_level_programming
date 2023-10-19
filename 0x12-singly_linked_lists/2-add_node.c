#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node = malloc(sizeof(list_t));
    /*Check if the memory allocation was successful. If not, return NULL*/
    if (!new_node)
    {
	    return NULL;
    }
 
    new_node->str = strdup(str);
    /*Assign the length of the string to the len member of the new node*/
    new_node->len = strlen(str);
    new_node->next = *head;
    /*Update the head pointer to point to the new node*/
    *head = new_node;
 
    return *head;
}
