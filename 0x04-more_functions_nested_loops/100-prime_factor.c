#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	long int n, pn;

	n = 612852475143;
	for (pn = 2; pn <= n; pn++)
	{
		if (n % pn == 0)
		{
			n /= pn;
			pn++;
		}
	}
	printf("%ld\n", pn);
	return (0);
}
