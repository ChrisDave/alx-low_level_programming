#include "main.h"

/**
 * _isdigit - Check for a number
 * @c: Number to be checked
 * Return: 1 for digit or 0 for other
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	return (0);
}
