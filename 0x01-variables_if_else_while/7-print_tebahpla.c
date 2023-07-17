#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char j;

	for (j = 'z' ; j >= 'a' ; j--)
		putchar(j);
	putchar('\n');
	return (0);
}
