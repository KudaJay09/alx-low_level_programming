#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10x in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i = 'a';

		while (i < '{')
			_putchar(i++);

		_putchar('\n');
	}
}
