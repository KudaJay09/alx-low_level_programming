#include "search_algos.h"
#include <unistd.h>

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
/*
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
*/