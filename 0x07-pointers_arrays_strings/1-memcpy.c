#include "main.h"

/**
 * _memcpy - Memory copy funtction
 * @dest: destinantion memory
 * @src: a source memory
 * @n: number of bytes to be copied
 *
 * Return: A string copy
 */
char *_memcpy(void *dest, const void src, size_t n)
{
	unsigned int ind;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (ind = 0; ind < n; ind++)
		destination[ind] = source[ind];

	return (dest);
}
