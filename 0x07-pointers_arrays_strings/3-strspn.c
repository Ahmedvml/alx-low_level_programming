#include "main.h"

/**
 * _strspn - a function that get the length of a prefix substring
 *
 *@s: initial segment of
 *@accpt: consists only of bytes from
 *Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					x++;
			}
		}
		else
			return (x);
	}
		return (x);

}
