#include "main.h"

/**
 * _memcpy - fills memory with another buffer
 * @dest: destinantion memory
 * @src: a source memory
 * @n: length of buffer
 *
 * Return: A string copy
 */

char *_memcpy(char *dest, char *src, unisgned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
