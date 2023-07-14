#include <stdio.h>

/**
 * main Entry point
 *
 * Description: program to print alphabet letters
 *
 * Return: 1 (success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
