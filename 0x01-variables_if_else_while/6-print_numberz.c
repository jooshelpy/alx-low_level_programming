#include <stdio.h>

/**
 * main - entry point
 *
 * Decription: print all numbers using puchar only
 *
 * Return: 0 (success)
 **/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar('0' + n);
	putchar('\n');
	return (0);
}
