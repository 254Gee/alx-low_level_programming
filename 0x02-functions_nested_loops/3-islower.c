#include "main.h"

/**
 * islower - checks for lowercase character
 * @c: The char to be checked
 * Return: 1 for lowercase char or 0 for anything else
 */

int islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
