#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char ls;

	for (ls = 'a'; ls <= 'z'; ls++)
	{
		if (ls != 'e' && ls != 'q')
			putchar(ls);
	}

	putchar('\n');
	return (0);
}
