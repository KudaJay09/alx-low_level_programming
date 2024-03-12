#include "search_algos.h"

int interpolation_search(int *array, size_t size, int value) {
    if (!array || size == 0) {
        return -1; // Array is NULL or empty
    }

    int low = 0;
    int high = size - 1;

    while (low <= high && array[low] <= value && value <= array[high]) {
        // Calculate the probe position using interpolation formula
        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        printf("Comparing with array[%zu] = %d\n", pos, array[pos]);

        if (array[pos] == value) {
            return pos; // Value found at index pos
        } else if (array[pos] < value) {
            low = pos + 1; // Adjust the search range
        } else {
            high = pos - 1; // Adjust the search range
        }
    }

    return -1; // Value not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 11;
    size_t arr_size = sizeof(arr) / sizeof(arr[0]);

    int result = interpolation_search(arr, arr_size, target);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}