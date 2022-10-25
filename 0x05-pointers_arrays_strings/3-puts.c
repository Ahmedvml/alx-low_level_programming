#include "main.h"

/**
 *_puts - prints a string followed by a new line
 *@str: prints a string folowed by a new line
 *Return: no return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
