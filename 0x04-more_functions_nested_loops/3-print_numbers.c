#include "main.h"

/**
 * print_numbers - Prints numbers from 0 through 9 followed by new line.
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		_putchar(x + '0');

	_putchar('\n');

}
