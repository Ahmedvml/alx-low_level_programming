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
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

return (0);

}
