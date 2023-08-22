#include "main.h"

/**
 * _abs - Computs the absolut value of an intger
 * @c: The number to be computed
 * Return: Absolute valure of number or zerp
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
