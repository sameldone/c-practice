/***********************************************************************************************************
 * 3-mul.c
 * main()-prints the product of two arguments
 * return-Always 0
 * ******************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__ ((unused)),char *argv[])
{

	if(argc!=3)
	{
		printf("Error\n");
		return(1);
	}
	printf("%d\n",atoi(argv[1])*atoi(argv[2]));

	return(0);
}
