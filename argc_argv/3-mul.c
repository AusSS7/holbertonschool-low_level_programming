#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - multiplies two numbers
* @argc: number of arguments in argv
* @argv: two string numbers
* Return: Always Success 0
*/

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
