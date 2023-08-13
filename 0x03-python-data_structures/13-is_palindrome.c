#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the head of listint_t.
 * @n: Integer value to add to the list.
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new;

    // Allocate memory for the new node
    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);
    new->n = n;

    // Link the new node to the current head of the list
    new->next = *head;

    // Update the head to point to the new node
    *head = new;

    // Return the address of the new element
    return (new);
}

/**
 * is_palindrome - Identifies if a singly linked list is a palindrome.
 * @head: Pointer to the head of listint_t.
 * Return: 1 if it is a palindrome, else 0.
 */
int is_palindrome(listint_t **head)
{
    listint_t *head2 = *head;
    listint_t *aux = NULL, *aux2 = NULL;

    // If the list is empty or has only one element, it's considered a palindrome
    if (*head == NULL || head2->next == NULL)
        return (1);

    // Copy the original list to a new list in reverse order
    while (head2 != NULL)
    {
        add_nodeint(&aux, head2->n);
        head2 = head2->next;
    }
    aux2 = aux;

    // Compare the original list with the reversed list
    while (*head != NULL)
    {
        if ((*head)->n != aux2->n)
        {
            // If the elements are not equal, free the reversed list and return 0
            free_listint(aux);
            return (0);
        }
        *head = (*head)->next;
        aux2 = aux2->next;
    }

    // If the comparison was successful, free the reversed list and return 1
    free_listint(aux);
    return (1);
}

