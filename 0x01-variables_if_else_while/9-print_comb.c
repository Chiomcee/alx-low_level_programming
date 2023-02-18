#include <stdio.h>

/**
 * main - prints all possible combination of single digit
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	}
	return (0);
}
