#include "main.h"

/**
 * flip_bits - counts the number of bits to flip to
 * get fromone number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value;
	unsigned int count_flip = 0;

	xor_value = n ^ m;

	while (xor_value != 0)
	{
		count_flip += xor_value & 1;
		xor_value >>= 1;
	}

	return (count_flip);
}
