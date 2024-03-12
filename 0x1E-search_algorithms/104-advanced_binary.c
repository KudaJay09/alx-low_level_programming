#include <stdio.h>

int advanced_binary_recursive(int *array, size_t size, int value, size_t start) {
    if (size == 0) {
        return -1; // Value not found
    }

    size_t mid = size / 2;
    int mid_value = array[start + mid];

    printf("Searching in array: [");
    for (size_t i = start; i < start + size; ++i) {
        printf("%d", array[i]);
        if (i < start + size - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    if (mid_value == value) {
        return start + mid; // Value found
    } else if (mid_value > value) {
        return advanced_binary_recursive(array, mid, value, start);
    } else {
        return advanced_binary_recursive(array, size - mid - 1, value, start + mid + 1);
    }
}

int advanced_binary(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1; // Invalid input
    }
    return advanced_binary_recursive(array, size, value, 0);
}

int main() {
    int array[] = {1, 2, 3, 4, 4, 4, 5, 6, 7};
    size_t array_size = sizeof(array) / sizeof(array[0]);
    int value = 4;

    int result = advanced_binary(array, array_size, value);
    if (result != -1) {
        printf("Index of %d in the array: %d\n", value, result);
    } else {
        printf("%d not found in the array.\n", value);
    }

    return 0;
}