#include "main.h"

/**
 * _memcpy - Memory copy funtction
 * @dest: destinantion memory
 * @src: a source memory
 * @n: number of bytes to be copied
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
