#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @n: Number of elements to be printed.
 * @a: Array of integer.
 * Return: void
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
