#include "main.h"

/**
 * print_alphabet_x10- Prints the alphabts 10 times in lowercase.
 */

void print_alphabet_x10(void)
{
	int  count;
	char p;

	while (count++ <= 9)
{
		for (p = 'a'; p <= 'z'; p++)
{
			_putchar(p);
}
		_putchar('\n');
}
	return (0);
}
