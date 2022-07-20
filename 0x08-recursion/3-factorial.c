#include "main.h"

/**
 * factorial - Returns factorial of a given number.
 * @n: The factorial number
 *
 * Return: If n > 0 - the fact of n
 * If n < 0 - 1 to indicate error
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);

	result = result * factorial(n - 1);

	return (result);
}
