/***********************************************************************************************************
 * 0-whatsmyname.c
 * main()-prints the name of the executable
 * return-Always 0
 * ******************************************************************************************************/
#include <stdio.h>

int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n",argv[0]);

	return(0);
}
