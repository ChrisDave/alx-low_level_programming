#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * File : 2-print_alphabet.c
 * by David Okai
 *
 */

/**
 * main : Assign a random number to the variable n each time it is executed
 *	and print the last digit of the number stored in the variable n
 *
 *Return : Always 0
 */
/*
 * main should return 0
 */
int main(void)
{

	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);

	putchar(10); /* this is an ascii code new line */

	return (0);
}
