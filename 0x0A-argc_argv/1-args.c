#include <stdio.h>

/**
 * main - A fucntion to print number of arguments passed
 * @argc: argc param
 * @argv: array of a command listed
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
