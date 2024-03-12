#include "search_algos.h"

int jump_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1; // Invalid input or empty array
    }

    // Calculate the jump step (square root of the size)
    size_t jump_step = (size_t)sqrt(size);

    // Initialize the left and right pointers
    size_t left = 0;
    size_t right = (jump_step < size) ? jump_step : size - 1;

    // Perform the jump search
    while (left <= right) {
        if (array[left] == value) {
            return (int)left; // Value found
        } else if (array[left] < value) {
            left += jump_step;
            right = (left + jump_step < size) ? left + jump_step : size - 1;
        } else {
            break; // Value cannot be in this block
        }
    }

    // Perform linear search within the current block
    for (size_t i = left; i <= right && i < size; ++i) {
        if (array[i] == value) {
            return (int)i; // Value found
        }
    }

    return -1; // Value not found
}

// Example usage
int main(void) {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25};
    int target = 13;
    int result = jump_search(arr, sizeof(arr) / sizeof(arr[0]), target);
    if (result != -1) {
        printf("Value %d found at index %d\n", target, result);
    } else {
        printf("Value %d not found in the array\n", target);
    }
    return 0;
}