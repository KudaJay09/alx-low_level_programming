#include <stdio.h>

void _attribute_((constructor)) hare(void);
/**
* hare - print string before main function
*/
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
