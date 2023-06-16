#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short i = 49;
	int j = 0;

	while (j < 10)
	{
		putchar(i);
		i++;
		j++;
	}
	putchar('\n');
	return (0);
}
