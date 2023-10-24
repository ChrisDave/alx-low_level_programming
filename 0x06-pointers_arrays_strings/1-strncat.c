#include "main.h"
#include <string.h>

/**
 * _strncat - A function to append some charx
 * @dest: First parameter
 * @src: Second parameter
 * @n: third parameter
 *
 * Return: A string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
