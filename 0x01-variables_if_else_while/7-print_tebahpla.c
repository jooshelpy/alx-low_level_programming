#include <stdio.h>

/**
 * main - entry point
 *
 *  Decription: print all alphabet in reverse
 *
 *  Return: 0 (success)
 **/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
