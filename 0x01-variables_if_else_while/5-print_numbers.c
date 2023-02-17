#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: Prints single digit numbers of base 10 from 0
 * Return: Always 0
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		printf("%d, num);
		num++;
	}

	putchar('\n');
	return (0);
}
