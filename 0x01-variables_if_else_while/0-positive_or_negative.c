#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - C program to print if number is +ve, -ve or zero.
 * 
 * Description: Program assigns random number each time it is run and prints if the number is positive or negative
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0);
	{
		printf("%d is positive\n", n);
	}
	else if (n ==0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
