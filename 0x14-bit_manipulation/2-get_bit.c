#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: starting from 0 of the bit you want to get.
 * @n: Bit to be searched for
 * Return: value of the bit at index, else if an error occured - -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);

}
