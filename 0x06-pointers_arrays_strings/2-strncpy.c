#include "main.h"
#include <string.h>

/**
 * _strncpy - A function that copies a string
 * @dest: First parameter
 * @src: Second parameter
 * @n: third parameter
 *
 * Return: A string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
