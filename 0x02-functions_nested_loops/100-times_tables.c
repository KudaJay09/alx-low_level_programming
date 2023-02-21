#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int n1, n2, prod;

	if (n >= 0 && n <= 15)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			_putchar('0');

			for (n2 = 1; n2 <= n; n2++)
			{
				_putchar(',');
				_putchar(' ');

				prod = n1 * n2;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar('0' + (prod / 100));
					_putchar('0' + ((prod / 10) % 10));
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar('0' + (prod / 10));
				}
				_putchar('0' + (prod % 10));
			}
			_putchar('\n');
		}
	}
}
