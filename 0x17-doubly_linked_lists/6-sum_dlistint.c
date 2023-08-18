ii#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

int sum_dlistint(dlistint_t *head) {
    int sum = 0;

    while (head != NULL) {
        sum += head->n;
        head = head->next;
    }

    return sum;
}

int main() {
    dlistint_t *head = NULL;

    // Create and populate the linked list
    // ...

    // Calculate the sum of data values in the linked list
    int totalSum = sum_dlistint(head);
    printf("Sum of data values: %d\n", totalSum);

    return 0;
}

