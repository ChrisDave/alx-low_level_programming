#include "main.h"

/**
 * print_most_numbers - Print the numbers since 0 up to 9
 * except 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	_putchar('\n');
}


