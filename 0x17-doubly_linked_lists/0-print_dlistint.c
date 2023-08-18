#include <stdio.h>
#include <stddef.h>

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h) {
    size_t count = 0;

    while (h != NULL) {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }

    return count;
}

int main() {
    dlistint_t node1 = {1, NULL, NULL};
    dlistint_t node2 = {2, NULL, NULL};
    dlistint_t node3 = {3, NULL, NULL};

    node1.next = &node2;
    node2.prev = &node1;
    node2.next = &node3;
    node3.prev = &node2;

    size_t numNodes = print_dlistint(&node1);
    printf("Number of nodes: %zu\n", numNodes);

    return 0;
}

