#include <stdio.h>

/**
 * main - Prints all alphabets in lower case except q and e
 *
 * Return: Aways 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
