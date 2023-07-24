#include "main.h"
/**
 * puts2 - function should only print one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int j;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
