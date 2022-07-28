#include <stdio.h>

/**
 * main - A fucntion to print a name
 * @argc: argc param
 * @argv: array of a command listed
 *
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
