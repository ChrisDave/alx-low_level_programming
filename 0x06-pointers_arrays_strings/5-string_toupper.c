#include "main.h"

/**
 * string_toupper - A function that changes lowercase letters of a string t
 * to uppercase.
 * @x: strng parameter
 * Return: String
 */

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
