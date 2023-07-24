#include "main.h"
/**
 * puts2 - function should only print one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longj = 0;
	int i = 0;
	char *n = str;
	int u;

	while (*n != '\n')
	{
		n++;
		longj++;
	}
	i = longj - 1;
	for (u = 0; u <= i ; u++)
	{
		if (u % 2 == 0)
		{
			putchar(str[0]);
		}
	}
	putchar('\n');
}
