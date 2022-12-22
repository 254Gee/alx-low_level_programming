#include "main.h"
#include <stdio.h>

/**
 * _strncpy - entry
 * @dest: destination
 * @src: source
 * @n: num
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, s = 0;

	while (src[i++])
		s++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = s; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
