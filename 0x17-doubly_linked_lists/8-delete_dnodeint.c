#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
    if (head == NULL || *head == NULL) {
        return -1;  // Invalid parameter or empty list
    }

    dlistint_t *current = *head;

    if (index == 0) {
        *head = (*head)->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(current);
        return 1;
    }

    for (unsigned int i = 0; i < index && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        return -1;  // Index out of bounds
    }

    if (current->prev != NULL) {
        current->prev->next = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    free(current);
    return 1;
}

int main() {
    dlistint_t *head = NULL

