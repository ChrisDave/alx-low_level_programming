#include "main.h"

/**
 * swap_int - Given two integers swap their holding values
 * @a: Paramter 1
 * @b: Parameter 2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
