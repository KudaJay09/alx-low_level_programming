#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n - 98
 * @n: beginning of number
 */
void print_to_98(int n)
{
	if (n > 99)
	{
		while (n > 98)
			printf("%d, ", n--);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
	}

	printf("%d\n", n);
}
