#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: The string to print
 * Return: always 0
 */
void puts_half(char *str)
{
	int j = 0;
	int i;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		i = (j - 1) / 2;
		i += 1;
	}
	else
	{
		i = j / 2;
	}
	for (; i < j; i++)
	{
		putchar(str[i]);
	}
		putchar('\n');
}
