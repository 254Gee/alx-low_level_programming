#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements
 * @a: array
 * @n: num of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[c]);
		if (x != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
