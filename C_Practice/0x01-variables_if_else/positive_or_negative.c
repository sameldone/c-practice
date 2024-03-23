/******************************************************************
 * main()
 * This program gives a random number then prints whether the
 * number is positive or negative.
 * Returns-Always 0
 * *****************************************************************/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if(n<0)
	{
		printf("%d is a negative\n",n);
	}
	else
	{
		printf("%d is a positive\n",n);
	}

	return (0);
}
