#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, len;
	char *temp;

	temp = str
	len = 0;
	while (*str != 0)
	{
		len++;
		str++;
	}
	if (len % 2 == 1)
		i = (len - 1) / 2;
	else
		i = len / 2;
	str = temp + i;
	while (i < len)
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
