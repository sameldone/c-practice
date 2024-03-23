/******************************************************************
 * main()-Entry point
 * This program prints the last digit of a random number then checks
 * if the digit is greater than,less than or equal to zero.
 * Return-Always 0
 * *****************************************************************/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if(n%10>5)
	{
		printf("Last digit of %d is %d which is greater than 5\n",n,n%10);
	}

	else if(n%10<6&&n%10!=0)
	{
		printf("Last digit of %d is %d which is less than 6 and not 0\n",n,n%10);

	}

	else if(n%10==0)
	{
		printf("Last digit of %d is 0\n",n);
	}

	return (0);
}
