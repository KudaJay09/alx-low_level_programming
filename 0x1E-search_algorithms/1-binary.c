#include "search_algos.h"

int binary_search(int *array, size_t size, int value){
    if (array == NULL) {
        return -1;
    }

    int left = 0;
    int right = size - 1;

    while (left <= right){
        int mid = left + (right - left) / 2;
        int mid_value = array[mid];

        printf("Searching in array: [");
        for (int i = left; i < right; i++){
            printf("%d", array[i]);
            if (i < right) {
                printf(", ");
            }
        }
        printf("\n");

        if (mid_value == value) {
            return mid;
        } else if (mid_value < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int sorted_array[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    size_t array_size = sizeof(sorted_array) / sizeof(sorted_array[0]);
    int search_value = 11;

    int result = binary_search(sorted_array, array_size, search_value);

    if (result != -1) {
        printf("Value%d found at index %d.\n", search_value, result);
    } else {
        printf("Value %d not found in the array.\n", search_value);
    }

    return 0;
}