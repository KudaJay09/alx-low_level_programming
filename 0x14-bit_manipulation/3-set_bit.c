#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: starting from 0 of the bit you want to set
 * @n: pointer to the bit
 * Return: if it worked - 1, else if an error occured -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
