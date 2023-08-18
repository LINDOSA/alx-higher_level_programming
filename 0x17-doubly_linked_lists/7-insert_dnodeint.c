#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
    if (h == NULL) {
        return NULL;  // Invalid parameter
    }

    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL;  // Allocation failed
    }

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (idx == 0) {
        new_node->next = *h;
        if (*h != NULL) {
            (*h)->prev = new_node;
        }
        *h = new_node;
    } else {
        dlistint_t *current = *h;
        for (unsigned int i = 0; i < idx - 1 && current != NULL; i++) {
            current = current->next;
        }
        if (current == NULL) {
            free(new_node);
            return NULL;  // Index out of bounds
        }
        new_node->next = current->next;
        if (current->next != NULL) {
            current->next->prev = new_node;
        }
        current->next = new_node;
        new_node->prev = current;
    }

    return new_node;
}

int main() {
    dlistint_t *head = NULL;

    // Create and populate the linked list
    // ...

    // Insert a new node at a given position (index)
    dlistint_t *newNode = insert_dnodeint_at_index(&head, 2, 42);
    if (newNode != NULL) {
        printf("Node inserted at index 2: %d\n", newNode->n);
    } else {
        printf("Failed to insert node.\n");
    }

    return 0;
}

