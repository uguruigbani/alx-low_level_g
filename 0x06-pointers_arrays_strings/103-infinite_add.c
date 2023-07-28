#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: always 0
 */

void rev_string(char *n)
{
	int j = 0;
	int i = 0;
	char temp;

	while (*(n + j) != '\0')
	{
		j++;
	}
	j--;

	for (i = 0; i < j; i++, j--)
	{
		temp = *(n + i);
		*(n + i) = *(n + j);
		*(n + j) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representaion of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, j = 0, i = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + j) != '\0')
		j++;
	while (*(n2 + i) != '\0')
		i++;
	j--;
	i--;
	if (i >= size_r || j >= size_r)
		return (0);
	while (i >= 0 || j >= 0 || overflow == 1)
	{
		if (j < 0)
			val1 = 0;
		else
			val1 = *(n1 + j) - '0';
		if (i < 0)
			val2 = 0;
		else
			val2 = *(n2 + i) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		i--;
		j--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
