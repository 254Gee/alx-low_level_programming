#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 * @c: the char to be checked
 * Return: 1 for char or 0 for any else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
