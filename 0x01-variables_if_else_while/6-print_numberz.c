#include <stdio.h>

/**
 * main - Print all single digits numbers of base 10
 * starting from 0.  But using putchar for output
 *
 * Return : always 0
 **/

/* main.c */
int main(void)
{	/* main returns 0 */
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	printf(10);
	return (0);

}
