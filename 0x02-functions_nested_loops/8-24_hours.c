#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 * Return: ...
 */

void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar('0' + (hrs / 10));
			_putchar('0' + (hrs % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
		}
	}
}
