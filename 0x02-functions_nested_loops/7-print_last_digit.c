#include <main.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n is a integer
 * Return: Last no.
 */
int print_lst_digit(int n)
{
	int last =n % 10;

	/*Make absolute*/
	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
