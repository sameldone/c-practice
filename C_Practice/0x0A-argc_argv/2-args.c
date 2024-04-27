/***********************************************************************************************************
 * 2-args.c
 * main()-prints the argurments given in every new line
 * return-Always 0
 * ******************************************************************************************************/

#include <stdio.h>

int main(int argc,char *argv[])
{

	int i;

	for(i=0;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}
	return(0);
}	
