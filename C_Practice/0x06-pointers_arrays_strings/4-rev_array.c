/******************************************************************
 * 4-rev_array.c
 * reverse_array()-reverse the order of array of integers
 * return-void
 * *****************************************************************/

#include "main.h"

void reverse_array(int *a, int n)
{
	int tmp,i,j;

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j>0;j--)
		{
			tmp=*(a+j);
			*(a+j)=*(a+(j-1));
			*(a+(j-1))=tmp;
		}
	}
}
