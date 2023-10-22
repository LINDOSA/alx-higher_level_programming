#include "lists.h"
#include <stddef.h>

void turn(void);

/**
 * insert_node - Inserts a new node in a sorted linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @number: The value to insert in the new node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *node = *head;
    listint_t *new = malloc(sizeof(listint_t));

    if (new == NULL)
    {
        turn(); /* Call the 'turn' function or handle the error */
        return (NULL);
    }

    new->n = number;

    if (node == NULL || node->n >= number)
    {
        new->next = node;
        *head = new;
        return (new);
    }

    while (node && node->next && node->next->n < number)
        node = node->next;

    new->next = node->next;
    node->next = new;

    return (new);
}
