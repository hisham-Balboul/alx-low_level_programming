#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';
	int i = 0;

	while (i < 26)
	{
		if (c == 'q' || c == 'e')
		{
			i++;
		}
		else
		{
			putchar(c);
			i++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
