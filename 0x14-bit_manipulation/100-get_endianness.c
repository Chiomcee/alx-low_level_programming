#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 *
 * return: 0(If big-endian or 1
 *		If little-endian)
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
