#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of array of integers
 * @a: array of integers
 * @n: Number of elements of arry to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d",a[i]);
		if (i != (n - 1))
		{
			print(", ");
		}
	}
	printf("\n");
}
