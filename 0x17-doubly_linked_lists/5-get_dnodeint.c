#include <stdlib.h>

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

void free_dlistint(dlistint_t *head) {
    dlistint_t *current = head;
    while (current != NULL) {
        dlistint_t *temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    dlistint_t *head = NULL;

    // Create and populate the linked list
    // ...

    // Free the linked list
    free_dlistint(head);

    return 0;
}

