#include <unistd.h>

/**
 * main - main entry point
 *
 * Description printing
 *
 * return 1 : (not success)
 *
 **/

int main(void)
{	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, ch, 59);
	return (1);
}
