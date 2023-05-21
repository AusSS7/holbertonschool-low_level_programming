#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* main - prints the number of arguments passed into it.
* @argc: number of strings in argv
* @argv: strings containing program name and arguments
* Return: Always Success 0
*/

int main(int argc, char *argv[])
{
	int a;

	(void) argv;
	a = argc - 1;
	printf("%d\n", a);
	return (0);
}
