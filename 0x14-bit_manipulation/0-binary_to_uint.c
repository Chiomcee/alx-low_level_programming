#include "main.h"

/**
 * binary_to_uint - Function that converts binary num to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars
 *
 * Return: converted number,or 0 if there is one or
 *		more chars in the string b that is not 0 or 1, or if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int value = 0;

	if (b[i] == '\0')
		return (0);

	while ((b[i] == '0') || (b[i] == '1'))
	{
		value <<= 1;
		value += b[i] - '0';
		i++;
	}

	return (value);
}
