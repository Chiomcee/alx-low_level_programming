#include <stdio.h>

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: The string to print
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
