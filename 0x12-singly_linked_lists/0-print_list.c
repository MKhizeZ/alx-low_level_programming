#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{

    size_t Node_iter;
    Node_iter = 0;

    while (head)
    {
        if (head->str)
        {
            printf("[%u] %s\n", head->len, head->str);
        }
        else
        {
            printf("[0] (nil)\n");
        }
        
	/*moves along nodes*/
        head = head->next;
        Node_iter++; /*increments node count*/
    }

    return Node_iter;
}
