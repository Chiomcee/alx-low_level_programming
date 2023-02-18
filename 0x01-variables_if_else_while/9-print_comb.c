#include <stdio.h>

/**
 * main - W rite a program that prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
			putchar(1 + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
