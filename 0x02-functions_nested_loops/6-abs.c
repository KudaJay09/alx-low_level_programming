#include "main.h"

/**
 * _abs - entry point
 * @n: Integer thats going to compute absolute value
 * Return: Always 0
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
