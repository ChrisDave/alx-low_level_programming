#include "main.h"

/**
 * _isdigit - Check for a number
 * @x: Number to be checked
 * Return: 1 for digit or 0 for other
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
