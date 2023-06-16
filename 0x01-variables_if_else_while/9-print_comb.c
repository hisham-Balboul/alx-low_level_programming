#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short c = 48;

	while (c < 58)
	{
		putchar(c++);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('$');
	return (0);
}

