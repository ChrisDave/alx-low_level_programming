#include "main.h"
#include <string.h>

/**
 * _strcat - A function to append some charx
 * @dest: First parameter
 * @src: Second parameter
 * @n: third parameter
 *
 * Return: A string
 */

char *_strcat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
