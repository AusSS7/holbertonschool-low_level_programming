#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - prints its name, followed by a new line
* @argc: strings containing the program name and arguments
* @argv: number of strings in argv
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
