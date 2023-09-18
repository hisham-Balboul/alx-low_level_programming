#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s;
	int i;

	s = dest;
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (i < n)
	{
		*dest = '\0';
		i++;
		dest++;
	}
	dest = s;
	return (dest);
}
