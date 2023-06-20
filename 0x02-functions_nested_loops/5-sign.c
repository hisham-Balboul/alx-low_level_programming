#include "main.h"

/**
 * print_sign- checks if a number is +ve, 0 or -ve
 * @n: is the number to be checked
 * Return: 1 if char is positive, 0 if n is 0, -1 if is neagtive.
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
