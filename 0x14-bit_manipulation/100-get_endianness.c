#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: if big endain - 0, else if little endian 1
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endain == 1)
		return (1);

	return (0);
}
