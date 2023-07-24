#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longj = 0;
	int i;

	while (*s != '\0')
	{
		longj++;
		s++;
	}
	s--;
	for (i = longj; i > 0; i--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
