/******************************************************************
 * 9-fizz_buzz.c
 * fizz_buzz()-prints numbers 1-100. for multiples of 3 fizz for 
 * multiples of 5 buzz. for both multiples of 3 and 5 fizzbuzz
 * Return-void
 * *****************************************************************/

#include <stdio.h>
#include "main.h"

void fizz_buzz(void)
{
	int number;
	
	for (number = 1; number <= 100; number++)
	{
		if((number % 3 == 0)&&(number % 5 ==0 ))
		{
			printf("FizzBuzz ");
		}
		else if(number % 5 == 0)
		{
			printf("Buzz ");
		}
		else if(number % 3 ==0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ",number);
		}
	
	}

	_putchar('\n');
}
