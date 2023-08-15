#include "main.h"
/**
 * main - A function that prints the alphabets in lowercase.
 *
 * Return: 0 (success)
 */
void print_alphabet(void);
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
