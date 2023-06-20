#include "main.h"

/**
 * print_alphabet - check the code
 *
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c != 'z' + 1)
	{
		_putchar(c++);
	}
	_putchar('\n');
}
