/***********************************************************************************************************
 * 8-print_diagsums.c
 * print_diagsums()-prints the sum of digits in the diagonal
 * @a-array
 * return-void
 * *************************************************************************************************/

#include "main.h"

void print_diagsums(int *a,int n)
{
	int i,j;
	int sum1=0;
	int sum2=0;

	for(i=0;i<n;i++)
	
	{
		
		sum1+=*(a+(i*n)+i);
	}

	for(j=0;j<n;j++)
	{
		sum2+=a[((j*n)+(n-1-j))];
	}
	
	printf("%d, %d\n",sum1, sum2);
}
