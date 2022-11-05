#include "main.h"

/**
 **_memset - this is a memory set function
 *@n: an integer
 *@s: string
 *@b: a character
 *Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int a;

	for (a = 0; a < n; a++)
	{
	    s[a] = b;
	}

	return (s);
}
