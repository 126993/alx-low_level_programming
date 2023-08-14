#include <stdio.h>
/**
 * main - A program that prints all single digit numbers to base 10.
 *
 * Return: 0 (success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
return (0);
}
