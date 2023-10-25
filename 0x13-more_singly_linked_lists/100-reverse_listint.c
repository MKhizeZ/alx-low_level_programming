#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to the first node in the list
 *
 * Return: New list, first node pointer
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *current = *head;
    listint_t *PastNode = NULL;
    listint_t *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = PastNode;
        PastNode = current;
        current = next;
    }

    *head = PastNode;

    return (*head);
}
