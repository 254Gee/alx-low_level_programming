#include <stdio.h>

/**
 * main - prints alphabets in lowercase and in reverse
 * Return: Always 0
 */

int main(void)
{
	char ls;

	for (ls = 'z'; ls >= 'a'; ls++)
		putchar(ls);

	putchar('\n');
	return (0);
}
