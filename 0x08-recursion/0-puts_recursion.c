#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by  new line.
 * @s: The string to print
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puthchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
