#include <stdio.h>
/**
 * main - Program that prints combinations of two digits
 *
 * Description: Prints all possible combinations
 * of double-digit numbers from the ANSI character set.
 *
 * Return: Always 0
 */
int main(void)
{
	int digit_one = '0';
	int digit_two;

	while (digit_one <= '9') /* Parent loop for first digit */
	{
		digit_two = '0';
		while (digit_two <= '9') /* Child loop for second digit */
		{
			/* Prevent repeating combinations e.g 01 and 10 */
			if (digit_one > digit_two)
			{
				digit_two++;
				continue;
			}

			/* Prevent sawme digit */
			if (digit_one == digit_two)
			{
				digit_two++;
				continue;
			}

			putchar(digit_one);
			putchar(digit_two);

			/* Prevent output if at the end of combination i.e 89*/
			if (digit_one != '8' || digit_two != '9')
			{
				putchar(',');
				putchar(' ');
			}

			digit_two++;
		}

		digit_one++;
	}

	putchar('\n');
	return (0);
}
