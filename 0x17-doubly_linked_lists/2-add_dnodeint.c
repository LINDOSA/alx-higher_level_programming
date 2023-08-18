#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL;  // Allocation failed
    }

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head != NULL) {
        (*head)->prev = new_node;
    }

    *head = new_node;

    return new_node;
}

int main() {
    dlistint_t *head = NULL;

    add_dnodeint(&head, 3);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 1);

    // Print the elements in the list
    dlistint_t *current = head;
    while (current != NULL) {
        printf("%d\n", current->n);
        current = current->next;
    }

    return 0;
}

