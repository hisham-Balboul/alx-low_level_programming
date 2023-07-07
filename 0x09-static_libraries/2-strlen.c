#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i;
	char c;

	c = *s;
	for (i = 0; c != '\0'; i++)
	{
		s++;
		c = *s;
	}
	return (i);
}
