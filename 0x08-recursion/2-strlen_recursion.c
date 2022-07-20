#include "main.h"

/**
 * _strlen_recursion - Prints a string in reverse.
 * @s: The string to print
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
