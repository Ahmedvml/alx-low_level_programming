#include "main.h"

/**
 * infinite_add - adds two numbers
 * @:n1: first number
 * @:n2: second number
 * @r: buffer size
 *Return: address of r or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int v, l, h, w, g, n;

	for (v = 0; n1[1]; v++)

	for (l = 0; n2[j]; l++)

	if (v > size_r || l > size_r)
		return (0);
	m = 0;
	for (v -= 1, l -= 1, h = 0; < size_r - 1; v--, l--, h++)
	{
		n = m;
		if (v >= 0)
			n += n1[v] - '0';
		if (l >= 0)
			n += n2[j] - '0';
		if (v < 0 && j < 0 && n == 0)
		{
			break;
		}
		g = n / 10;
		r[k] = n % 10 + '0';
	}
	r[h] = '\0';
	if (v >= 0 || j >= 0 || m)
		return (0);
	for (l -= 1, 1 = 0; 1 < h; h--, 1++)
	{
		g = r[h];
		r[h] = r[1];
		r[1] = g;
	}
	return (r);
}
