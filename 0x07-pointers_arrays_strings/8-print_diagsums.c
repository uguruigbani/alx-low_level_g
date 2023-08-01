#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry Point
 * @a: input value
 * @size: input value
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{

	int j, i, sum1 = 0, sum2 = 0;

	for (j = 0; j <= (size * size); j = j + size + 1)
		sum1 = sum1 + a[j];

	for (i = size - 1; i <= (size * size) - size; i = i + size - 1)
	sum2 = sum2 + a[i];
	printf("%d, %d\n", sum1, sum2);
}
