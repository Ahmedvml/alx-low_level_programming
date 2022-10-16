/*
 * File: 10-print_comb2.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, k = '0' j;

	for (i = '0'; i < '9; i++)
	{
		for (j = k; j <= '9'; j++)
		{
			if (i != j)
			{
			putchar(i);
			putchar(j);
			}
			if(i == j)
			{
				continue;
			}
			if (i == '8' && j == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar('');
			}
		}
		k++;
	}
	putchar('\n');

	return (0);
}
