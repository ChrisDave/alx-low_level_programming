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
	int ch;

	for (ch = 48; ch < 57; ch++)
		putchar(ch);

	printf(10);
	return (0);

}
