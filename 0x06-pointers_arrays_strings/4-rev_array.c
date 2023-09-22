#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: thee array
 * @n: the number of elements
 * Return: the array
 */

void reverse_array(int *a, int n)
{
	int temp = 0, j = 0;
	int i = n / 2;

	while (i > 0)
	{
		temp = a[j];
		a[j] = a[n - (j + 1)];
		a[n - (j + 1)] = temp;
		j++;
		i--;
	}
}
