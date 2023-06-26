#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int i, len;
	char temp;
	char *start;

	start = s;
	temp = *s;
	len = 0;
	while (*start != '\0')
	{
		len++;
		start++;
	}
	start--;
	for (i = 0; i < len / 2; i++)
	{
		temp = *s;
		*s = *start;
		*start = temp;
		start--;
		s++;
	}

}	
