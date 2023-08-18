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
			printf("%s\n", "FizzBuzz");
		else if (k % 3 == 0)
			printf("%s\n", "Fizz");
		else if (k % 5 == 0)
			printf("%s\n", "Buzz");
		else
			printf("%d\n", k);
	}
	printf("\n");
	return (0);
}
