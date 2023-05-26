#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the opcodes of its own
 * @argc: the count
 * @argv: the vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int s;
	int res;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	res = atoi(argv[1]);
	if (res < 0)
	{
		printf("Error\n");
		exit(2);
	}
	unsigned char *ptr = (unsigned char *)&main;

	for (s = 0; s < res; s++)
	{
		printf("%02x", ptr[s]);
		if (s == res - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}

