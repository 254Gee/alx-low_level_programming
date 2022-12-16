#include "main.h"

/**
 * _isupper - check if a letter is uppercase
 * @c: to be checked
 * Return: 1 for upper or 0 for anything else
 */

int _isupper(int c);
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	return (0);
}
