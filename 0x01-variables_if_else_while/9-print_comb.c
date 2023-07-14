#include <stdio.h>

/**
 * main - enrty point
 *
 * Decription: print numbers from 0 to 9
 *
 * Return: 0 (success)
 **/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');
	}
	return (0);
}
