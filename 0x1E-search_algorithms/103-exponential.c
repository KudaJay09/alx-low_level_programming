#include "search_algos.h"

int binary_search(int *array, int left, int right, int value) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int exponential_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    // Initialize the range to search
    int bound = 1;
    while (bound < size && array[bound] < value) {
        printf("Checking value at index %d: %d\n", bound, array[bound]);
        bound *= 2;
    }

    // Perform binary search within the found range
    int left = bound / 2;
    int right = (bound < size) ? bound : size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        printf("Searching in range [%d, %d]: [", left, right);
        for (int i = left; i <= right; ++i) {
            printf("%d", array[i]);
            if (i < right) {
                printf(", ");
            }
        }
        printf("]\n");

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int sorted_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int search_value = 7;
    int result = exponential_search(sorted_array, sizeof(sorted_array) / sizeof(sorted_array[0]), search_value);
    if (result != -1) {
        printf("Value %d found at index %d\n", search_value, result);
    } else {
        printf("Value %d not found in the array.\n", search_value);
    }
    return 0;
}