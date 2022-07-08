#include "main.h"

/**
 * print_numbers - Prints numbers from 0 through 9 followed by new line.
 */

void print_numbers(void)
{
	int y;

	for (y = 0; y < 10; y++)
		_putchar((y % 10) + '0');

	_putchar('\n');

}
