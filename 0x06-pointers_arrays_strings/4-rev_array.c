#include "main.h"

/**
 * reverse_array - reverse content of an array if integers
 * @a: array
 * @n: number of element in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j;
	int i;

	for (j = 0; j < n--; j++)
	{
		i = a[j];
		a[j] = a[n];
		a[n] = i;
	}
}
