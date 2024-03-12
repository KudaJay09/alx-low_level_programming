#include "search_algos.h"

int linear_search(int *array, size_t size, int value) {
    if (array == NULL){
        return -1;
    }

    for (size_t i = 0; i < size; ++i){
        printf("Comparing value %d with %d\n", array[i], value);
        if (array[i] == value) {
            return i;
        }     
    }

    return -1;
}

int main() {
    int my_array[] = {10, 20, 30, 40, 50};
    size_t array_size = sizeof(my_array) / sizeof(my_array[0]);
    int search_value = 30;

    int result = linear_search(my_array, array_size, search_value);
    if (result != -1) {
        printf("Value %d found at index %d\n", search_value, result);
    } else
    {
        printf("Value %d not found in the array.\n", search_value);
    }
    
    return 0;
}