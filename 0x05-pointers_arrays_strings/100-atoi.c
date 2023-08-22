#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The pointer to convert.
 * Return: An integer.
 */
int _atoi(char *s)
{
	int b = 0;
	unsigned int ni = 0;
	int isi = 0;
	int min = 1;

	while (s[b])
	{
		if (s[b] == 45)
		{
			min *= -1;
		}
		while (s[b] >= 48 && s[b] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[b] - '0');
			b++;
		}
		if (isi == 1)
		{
			break;
		}
		b++;
	}
	ni *= min;
	return (ni);
}
