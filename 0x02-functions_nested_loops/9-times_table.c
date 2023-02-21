#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int n1, n2, prod;

	for (n1 = 0; n1 < 10; n1++)
	{
		_putchar('0');

		for (n2 = 1; n2 < 10; n2++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n1 * n2;

			if (prod < 10)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
