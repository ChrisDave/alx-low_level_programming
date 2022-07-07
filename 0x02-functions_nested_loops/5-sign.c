#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: Argument passed.
 *
 * Return: 1,0 and -1 if > 0, == 0 and < 0 respectively.
 */

int print_sign(int n)
{
	if (n > 0)
{
		_putchar('+');
		return (1);
}
	else if (n == 0)
{
		_putchar('0');
		return (0);
}
	else
{
		_putchar('-');
		return (-1);
}
}
