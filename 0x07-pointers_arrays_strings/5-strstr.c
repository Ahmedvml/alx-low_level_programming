#include "main.h"

/**
 *_strstr- locates a substring
 *@needle: first occurrence of
 *@haystack: in the string
 *@NULL: if the substring is not found
 *Return: a pointer to the beginning of the located sybstring,
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int j = 0, k = 0;

	while (haystack[j])
	{
		while (needle[k] && (haystack[j] == needle[0]))
		{
			if (haystack[j + k] == needle[k])
				k++;
			else
				break;
		}
		if (needle[k])
		{
			j++;
			k = 0;
		}
		else
			return (haystack + j);
	}
	return (0);
}
