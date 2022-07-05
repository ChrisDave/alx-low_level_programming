#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * File : 2-print_alphabet.c
 * by David Okai
 *
 */

/**
 * main: Entry point 
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);

	putchar(10); /* this is an ascii code new line */

	return (0);
}
