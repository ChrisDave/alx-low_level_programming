#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 * Return: The numbers since 0 up to 9
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar(num + '0');
	_putchar('\n');
}


