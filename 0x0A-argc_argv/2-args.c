#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the programs
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always @ (Success)
 */


int main(int argc, char *argv[])
{

int count = 0;

if (argc > 0)
{
	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++ ;
	}
	}

return (0);
}
