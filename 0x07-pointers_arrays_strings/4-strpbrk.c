#include "main.h"

/**
 *_strpbrk-a function that searches a string for any of a set of bytes
 *
 *@s: occurence in the string
 *@accept: matches one of the bytes
 *@NULL: if no such byte
 *Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int j;
		while (*s)
		{
			for (j = 0; accept[j]; j++)
			{
				if (*s == accept[j])
					return (s);
			}
			s++;

		}
	return (NULL);
}
