#include <stdio.h>

/**
 * main - A fucntion to print number of arguments passed
 * @argc: argc param
 * @argv: array of a command listed
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
