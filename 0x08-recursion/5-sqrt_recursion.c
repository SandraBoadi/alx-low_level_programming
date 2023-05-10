#include "main.h"

int actual_sqrt_recursion(int n, int o);

/**
 * _sqrt_recursion - The natural square root of a number to be return
 * @n: Number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @o: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int o)
{
	if (o * o > n)
		return (-1);
	if (o * o == n)
		return (o);
	return (actual_sqrt_recursion(n, o + 1));
}

