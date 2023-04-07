#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: if big endain - 0, else if little endian 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
