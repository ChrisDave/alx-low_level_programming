#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @x: Number to be checked
 * Return: 1 for upper letter or 0 for other
 */

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
	{
		return (1);
	}
	return (0);
}
