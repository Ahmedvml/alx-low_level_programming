#include <stdio.h>
#include "main.h"

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: @ if true, 1 if false
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("Error\n");
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
