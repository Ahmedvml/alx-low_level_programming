#include "main.h"
#include <string.h>

/**
 *char *_strncpy - copies a string
 *@dest: destination.
 *@src: source.
 *Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = '\10';

		for (i < n; i++)
			dest[1] = '\10';

	}
	return (dest);
}
