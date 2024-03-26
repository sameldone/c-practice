/******************************************************************
 * main()
 * This program prints the alphabet in lower case followed by a new
 * line
 * Return-Always 0
 * *****************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
	int x;

	for(x='A';x<='Z';x++)
	{
		int to_lower=tolower(x);
		printf("%d ",to_lower);
		printf("%c ",to_lower);
		printf("\n");

	}
	
	return(0);
}
