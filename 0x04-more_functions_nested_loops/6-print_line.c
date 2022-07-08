#include "main.h"

/**
 * print_line - Checks for a digit fr
 * @c: The character to be checked.
 *
 * Return: 1 if a number is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
