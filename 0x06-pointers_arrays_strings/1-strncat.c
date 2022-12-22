#include "main.h"
#include <stdio.h>

/**
 * _strncat - entry
 * @dest: destination
 * @src: source
 * @n: num
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d = 0;

	while (dest[i])
		d++;
	for (i = 0; src[i] && i < n; i++)
		dest[d++] = src[i];
	return (dest);
}
