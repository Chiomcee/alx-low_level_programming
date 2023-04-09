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

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		i <<= 1;

		if (*b++ == '1')
		i += 1;
	}

	return (i);
}
