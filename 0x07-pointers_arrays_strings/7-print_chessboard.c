#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Array
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int b, n;

	for (b = 0; b < 8; b++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[b][n]);
		_putchar('\n');
	}
}
