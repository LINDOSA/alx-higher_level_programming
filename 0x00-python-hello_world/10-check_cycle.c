#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

int check_cycle(listint_t *list) {
    listint_t *slow = list;
    listint_t *fast = list;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return 1;  // Cycle detected
        }
    }

    return 0;  // No cycle found
}

int main() {
    // Example usage
    listint_t *list = NULL;
    list = malloc(sizeof(listint_t));
    list->n = 1;
    list->next = malloc(sizeof(listint_t));
    list->next->n = 2;
    list->next->next = malloc(sizeof(listint_t));
    list->next->next->n = 3;
    list->next->next->next = list;  // Create a cycle

    int hasCycle = check_cycle(list);
    printf("Has cycle: %d\n", hasCycle);

    // Free memory
    free(list->next->next);
    free(list->next);
    free(list);

    return 0;
}

