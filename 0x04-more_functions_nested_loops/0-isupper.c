#include "main.h"

/**
 * _isupper - Checks for uppercase character and returns
 * 1 if c is uppercase.
 * @c: Parameter to be checked.
 * Return: 1 (success) 0 (failure)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
