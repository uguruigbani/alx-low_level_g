#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char j;

	for (j = 'a' ; j <= 'z'; j++)
		if (j != 'q' && j != 'e')
			putchar(j);
	putchar('\n');
	return (0);
}
