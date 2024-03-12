#include "search_algos.h"

// Definition of a singly linked list node
typedef struct ListNode {
    int value;
    struct ListNode* next;
} listint_t;

listint_t* jump_list(listint_t* list, size_t size, int value) {
    if (list == NULL) {
        return NULL; // Invalid input
    }

    // Calculate the jump step
    size_t jump_step = (size_t)sqrt(size);
    listint_t* current = list;

    // Perform the jump search
    while (current && current->value < value) {
        printf("Comparing %d with %d\n", current->value, value);
        listint_t* prev = current;
        for (size_t i = 0; i < jump_step; ++i) {
            if (current->next) {
                current = current->next;
            } else {
                break;
            }
        }
    }

    // Linear search within the current block
    while (current && current->value < value) {
        printf("Comparing %d with %d\n", current->value, value);
        current = current->next;
    }

    if (current && current->value == value) {
        return current;
    } else {
        return NULL;
    }
}

// Example usage
int main() {
    // Create a sorted linked list: 1 -> 3 -> 5 -> 7 -> 9
    listint_t node1 = {1, NULL};
    listint_t node3 = {3, NULL};
    listint_t node5 = {5, NULL};
    listint_t node7 = {7, NULL};
    listint_t node9 = {9, NULL};

    node1.next = &node3;
    node3.next = &node5;
    node5.next = &node7;
    node7.next = &node9;

    int value_to_search = 5;
    listint_t* result = jump_list(&node1, 5, value_to_search);

    if (result) {
        printf("Value %d found at node with value %d\n", value_to_search, result->value);
    } else {
        printf("Value %d not found in the list.\n", value_to_search);
    }

    return 0;
}