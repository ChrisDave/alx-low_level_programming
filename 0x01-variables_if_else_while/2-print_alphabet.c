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
	char letter;

	for (letter = 'a'; lettter <= 'z'; letter++)
		putchar(letter);

	putchar("\n");

	return (0);
}
