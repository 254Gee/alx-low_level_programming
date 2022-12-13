#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0
 *
 */

int main(void)
{
	int a = 0;
	int f_b;
	int l_b;

	int a2;
	int f_b2;
	int l_b2;

	while (a <= 98)
	{
		f_b = (a / 10 + '0');
		l_b = (a % 10 + '0');
		a2 = 0;
		while (a2 <= 99)
		{
			f_b2 = (a2 / 10 + '0');
			l_b2 = (a2 % 10 + '0');

			if (a < a2)
			{
				putchar(f_b);
				putchar(l_b);
				putchar(' ');
				putchar(f_b2);
				putchar(l_b2);

				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a2++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
