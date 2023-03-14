#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ptStr;
	int str_len = 0;
	int i;

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	ptStr = malloc((str_len * sizeof(char)) + 1);

	if (ptStr == NULL)
	{
		return (NULL);
	}


	for (i = 0; str[i] != '\0'; i++)
	{
		ptStr[i] = str[i];
	}

	ptStr[i] = '\0';

	return (ptStr);
}
