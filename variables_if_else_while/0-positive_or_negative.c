#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry point
 * return: alwasy 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0){
	printf("%d is Postive\n", n);
	} else if (n < 0) {
	  printf("%d is Negative\n", n);
	} else if (n == 0) {
	  printf("%d is Zero\n", n);
	}
	/* your code goes there */
	return (0);
}
