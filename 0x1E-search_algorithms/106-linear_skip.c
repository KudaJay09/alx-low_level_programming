#include <stdio.h>
#include <math.h>

// Definition of a skip list node
typedef struct skiplist_node {
    int value;
    struct skiplist_node *next;
    struct skiplist_node *express;
} skiplist_t;

// Function to search for a value in the skip list
skiplist_t *linear_skip(skiplist_t *list, int value) {
    if (!list) {
        return NULL; // Empty list or NULL head
    }

    skiplist_t *current = list;
    while (current) {
        printf("Value checked at index [%d] = [%d]\n", current->value, current->value);
        if (current->value == value) {
            return current; // Found the value
        } else if (current->express && current->express->value <= value) {
            current = current->express; // Move express lane
        } else {
            current = current->next; // Move to next node
        }
    }

    return NULL; // Value not found
}

// Example usage
int main() {
    // Create a sample skip list
    skiplist_t node0 = {0, NULL, NULL};
    skiplist_t node1 = {1, NULL, NULL};
    skiplist_t node4 = {4, NULL, NULL};
    skiplist_t node5 = {5, NULL, NULL};
    skiplist_t node8 = {8, NULL, NULL};
    node0.next = &node1;
    node1.next = &node4;
    node4.next = &node5;
    node5.next = &node8;
    node0.express = &node4;
    node1.express = &node5;

    // Search for a value
    int value_to_search = 5;
    skiplist_t *result = linear_skip(&node0, value_to_search);
    if (result) {
        printf("Found %d at index %d\n", value_to_search, result->value);
    } else {
        printf("%d not found in the skip list.\n", value_to_search);
    }

    return 0;
}