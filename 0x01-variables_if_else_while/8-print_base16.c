#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int j;
	char n;

	for (j = 0 ; j < 10 ; j++)
		putchar(j + '0');
	for (n = 'a' ; n <= 'f' ; n++)
		putchar(n);
	putchar('\n');
	return (0);

}
