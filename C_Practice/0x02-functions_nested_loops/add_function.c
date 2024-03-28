/******************************************************************
 * add_function.c 
 * main()-Prints sum of x and y. Returns 0
 * add()-Adds two numbers x and y. Returns sum of x and y.
 * *****************************************************************/

#include <stdio.h>

int add(int, int);

int main(void)
{
	int x=10;
	int y=20;
	int z;

	z=add(x,y);

	printf("z is %d",z);

	return (0);
}

int add(int a, int b)
{
	int c=a+b;
	
	return (c);
}
