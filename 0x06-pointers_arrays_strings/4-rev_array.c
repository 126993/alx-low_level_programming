#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: Pointer to an array.
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b = 0, temp;

	n = n - 1;

	for (b = 0; b < n; b++)
	{
		temp = a[b];
		a[b] = a[n];
		a[n] = temp;
		n--;
	}
}
