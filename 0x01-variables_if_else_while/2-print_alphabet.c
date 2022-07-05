#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> Prints the alphabet in lowercase
 *
 * Return : Always 0.
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);

	putchar("\n");

	return (0);
}
