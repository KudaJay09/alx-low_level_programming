#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints the alphabet in lowercase,
 * and uppercase followed by a new line. Prints alphabets from
 * the ANSI character set.
 *
 * Return: Always 0
 */
int main(void)
{
	int ansi_number_lowercase;
	int ansi_number_uppercase;

	ansi_number_lowercase = 'a';
	ansi_number_uppercase = 'A';

/* Ouput lowercase alphabet */
	while (ansi_number_lowercase < '{')
	{
		putchar(ansi_number_lowercase);
		ansi_number_lowercase++;
	}

/* Ouput uppercase alphabet */
	while (ansi_number_uppercase < '[')
	{
		putchar(ansi_number_uppercase);
		ansi_number_uppercase++;
	}

/* Ouput newline*/
	putchar('\n');
	return (0);
}

