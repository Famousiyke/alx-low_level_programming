#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Entry point 
 * Return always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	        printf("%i is a positive number\n", n);
	else if (n == 0)
	        printf("%i is zero\n", n);
	else
                printf("%i is a negative number\n", n);	
	
	return (0);
}
