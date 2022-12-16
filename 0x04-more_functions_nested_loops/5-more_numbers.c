#include "main.h"

/**
 * more_numbers - prints 10x
 * Return: 10x
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (y > 9)
			{
				_putcharf((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
