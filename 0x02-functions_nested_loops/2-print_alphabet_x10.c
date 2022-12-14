#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times in lower case
 * Return: void
 */

void print_alphabet_x10(void)
{
	char lc;
	int i = 0;

	while (i < 10)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			_putchar(lc);
		}
	_putchar('\n');
	i++;
	}
}
