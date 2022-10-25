#include "main.h"
#include <string.h>

/**
 *_strlen - returns the length of a string
 *@s: s pointer
 *Return: the length of the string
 */

int _strlen(char *s)
{
	int h = 0;

	while (*(s + h) != 0)
	{
		h++;
	}
	return (h);
}
