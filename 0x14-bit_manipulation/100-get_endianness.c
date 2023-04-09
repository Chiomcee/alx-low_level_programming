#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 *
 * return: If big-endian - 0.
 *		If little-endian - 1.
 */

int get_endianness(void)
{
	int i;
	char *s;

	i = 1;
	s = (char *)&i;

	if (*s == 1)
		return (1);

	return (0);
}
