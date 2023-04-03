#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of function main
 * Description: 
 * Return : Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	  {
	    last_digit = n % 10;
	      printf("Last digit of %d is %d\n", n,last_digit);
	  }
	else if (n == 0)
	  {
	    last_digit = n % 10;
	      printf("Last digit of %d is %d", n,last_digit);
	  }
	else if (n < 0)
	  {
	    last_digit = n % 10;
	    printf("Last digit of %d is -%d", n,last_digit);
	  }
	return (0);
}
