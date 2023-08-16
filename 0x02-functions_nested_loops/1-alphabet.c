#include "main.h"

/**
 * main - A function that prints the alphabets in lowercase.
 * @c: Alphabet that is to be printed.
 * Return: void
 */

void print_alphabet(void)

{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
