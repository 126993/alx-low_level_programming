#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: String to be printed.
 * Return: Nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
