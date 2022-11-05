#include "main.h"

/**
 *_memset - this is a memory set function
 *@n: an integer
 *@s: string
 *@b: a character
 *Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
