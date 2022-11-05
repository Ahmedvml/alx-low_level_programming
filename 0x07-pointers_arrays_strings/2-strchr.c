#include "main.h"

/**
 *_strchr - This function locates a character in a string
 *@c: occurrence of character
 *@s: in string
 *Return: to a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
	else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
