#include "main.h"

/**
 * flip_bits - Count bist number to convert
 * to get from one number to another
 * @m: Number
 * @n: Number
 *
 * Return: Numbers of bits that n have to convert for be equalto m
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count;

	for (count = a = 0; a < 64; a++, count++)
		if (((n >> a) & 1) == ((m >> a) & 1))
			count--;
	return (count);
}
