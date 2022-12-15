#include <stdio.h>

/**
 * main - prints the sum
 * Return: Always 0
 */

int main(void)
{
	int x, y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}
		y++;
	}
	printf("%d\n", y);
	return (0);
}
