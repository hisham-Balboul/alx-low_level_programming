#include "main.h"

/**
 * print_last_digit- prints the last digit
 * @n: is the number to be checked
 * Return: the abs of a number.
 */
int print_last_digit(int n)
{
	int x = 0;
	
	x = n % 10;
	_putchar(x);
	return (x);
}
