#include "main.h"

/**
 * print_number -  prints an integer.
 * @n: Input integer.
 * Return: nothing.
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		putchar(45);
		a = -a;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	putchar(a % 10 + '0');
}
