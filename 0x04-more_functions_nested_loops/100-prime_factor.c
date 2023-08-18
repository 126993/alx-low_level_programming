#include <stdio.h>
#include "main.h"

/**
 * main - Prints the largest prime factor.
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long int k, n = 612852475143;

	for (k = 3 ; k < 782849 ; k = k + 2)
	{
		while ((n % k == 0) && (n != k))
			n = n / k;
	}
	printf("%lu\n", n);
	return (0);
}
