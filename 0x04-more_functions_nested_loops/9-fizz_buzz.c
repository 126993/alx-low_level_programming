#include <stdio.h>

/**
 * main - FizzBuzz test.
 * Return: 0
 */

int main(void)
{
	int k;

	for (k = 1 ; k <= 100 ; k++)
	{
		if ((k % 3 == 0) && (k % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (k % 3 == 0)
			printf("%s", "Fizz");
		else if (k % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", k);
	}
	printf("\n");
	return (0);
}
