#include "main.h"

/**
 * clear_bit - Sets value of a bit to 0 at an index given
 * @n: numberwith the bit
 * @index: the index of the bit to clear
 *
 * Return: 1 if it works, or -1 if an eror occur.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
