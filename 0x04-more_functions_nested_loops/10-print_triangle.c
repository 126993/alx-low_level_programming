#include "main.h"

/**
 * print_triangle - Prints triangle using # character.
 * @size: Size of the triangle.
 * Return: void
 */

void print_triangle(int size)
{
	int size;

	if (size <= 0)
		putchar('\n');
	{
		int k;
		int b;

		for (k = 0 ; k <= size ; k++)
		{
			for (b = 0 ; b <= size ; b++)
				putchar('#');
			putchar('\n');
		}
	}
}
