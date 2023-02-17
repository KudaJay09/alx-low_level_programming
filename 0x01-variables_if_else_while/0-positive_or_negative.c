#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - C program to print if number is +ve, -ve or zero.
 *
 * Description: Program will assign a random number to the variable
 * n each time it is executed and print if the number is +ve, -ve or
 * zero.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

/* Generate random integer */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
