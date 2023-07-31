#include "main.h"

/**
 * _memset - Entry point
 * @n: input value
 * @s: Pointer to  memory area
 * @b: constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);

}
