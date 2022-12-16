#include "main.h"

/**
 * print_most_numbers - prints num upto 9
 * Description: prints num excluding 2 and 4
 * Return: the num
 */

void print_most_numbers(void)
{
	int c = 0;

	for (; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}
