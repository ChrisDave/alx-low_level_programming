#include "main.h"

/**
 * _memcpy - Memory copy funtction
 * @dest: destinantion memory
 * @src: a source memory
 * @n: number of bytes to be copied
 *
 * Return: A string copy
 */
char *_memcpy(char *dest, char src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
