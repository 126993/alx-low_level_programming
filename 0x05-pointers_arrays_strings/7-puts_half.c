#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: String to be printed.
 * Return: void.
 */
void puts_half(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	if (b % 2 == 1)
	{
		a = (b - 1) / 2;
		a += 1;
	}
	else
	{
		a = b / 2;
	}
	for (; a < b; a++)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
