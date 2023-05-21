#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - prints all arguments it receives
* @argc: number of strings in argv
* @argv: strings containing the program name and arguments
* Return: Always Success 0
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
