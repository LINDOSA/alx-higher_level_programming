#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) {
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL;  // Allocation failed
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL) {
        new_node->prev = NULL;
        *head = new_node;
    } else {
        dlistint_t *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
        new_node->prev = current;
    }

    return new_node;
}

int main() {
    dlistint_t *head = NULL;

    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);

    // Print the elements in the list
    dlistint_t *current = head;
    while (current != NULL) {
        printf("%d\n", current->n);
        current = current->next;
    }

    return 0;
}

