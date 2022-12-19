#include "main.h"

/**
 * swap_int - swapsvalue of 2 int
 * @a: 1st int
 * @b: 2nd int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
