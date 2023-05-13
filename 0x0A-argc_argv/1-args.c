#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc: counts number of arguments
 * @argv: array of string pointers
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
