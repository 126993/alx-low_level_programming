#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Integer to be swaped with the value of *b.
 * @b: Integer to be swaped with the value of *a.
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
