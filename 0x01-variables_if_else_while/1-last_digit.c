#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Source code to print the last digit
 *
 * Return: 0 (Success)
 */

int main(void)
{
int s;
int b;

srand(time(0));
s = rand() - RAND_MAX / 2;
b = s % 10;
if (b > 5)
{
	printf("Last digit of %d is %d and greater than 5\n", s, b);
}
else if (b == 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", s, b);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", s, b);
}
	return (0);
}
