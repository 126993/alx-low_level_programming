#include "main.h"

/**
 * puts2 - Prints every other haracter of a string starting
 * with the first character.
 * @str: String to be printed.
 * Return: Void
 */
void puts2(char *str)
{
	int a;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	for (a = 0; a < b; a += 2)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
