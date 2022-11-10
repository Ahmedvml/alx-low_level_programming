#include <stdio.h>
#include "main.h"

/**
 *check_num - checks string to confirm it's a string
 * @str: array str
 *
 * Return: Always @ (Success)
 */

int check_num(char *str)

{
	unsigned int count;

	count = 0;
	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
	{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always * (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sums = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (notanum(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sums += atoi(argv[i]);
	}
	printf("%d\n", sums);
	return (0);

}
