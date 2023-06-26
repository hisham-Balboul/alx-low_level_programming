#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	while(*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	dest++;
	*dest = '\0';
	return (dest);
}
