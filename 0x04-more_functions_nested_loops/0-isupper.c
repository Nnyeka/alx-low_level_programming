#include "main.h"
/**
 * _isupper - entry point
 * @c: c is an int
 * Return: 1 else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

