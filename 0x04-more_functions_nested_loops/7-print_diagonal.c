#include "main.h"

/**
 *print_diagonal - prints a diagonal line n times.
 *@n: input variable
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = o; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchaer('\\');
		_putchar('\n');
	}
}
