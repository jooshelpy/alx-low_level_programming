#include <stdio.h>

/**
 * main - entry point
 *
 * Decription: print all hex numbers
 *
 * Return: 0 (success)
 **/

int main(void)
{
	int x;

	for (x = 0; x <= 15; x++)
		printf("%x", x);
	printf("\n");
	return (0);
}
