/***********************************************************************************************************
 * 100-change.c
 * main()-prints minimum nuber of coins to make change for
 * return-Always 0
 * ******************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc,char *argv[])
{
	int cents,num_of_coins=0;

	if(argc!=1)
	{
		printf("Error\n");

		return(1);
	}
	if(atoi(argv[1])<0)
	{
		printf("0\n");
	}

	cents=atoi(argv[1]);
	while(cents>0)
	{
		if (cents>=25)
		{
			cents-=25;
		}
		else if (cents>=10)
		{
			cents-=10;
		}
		else if (cents>=5)
		{
			cents-=5;
		}
		else if (cents >= 2)
		{
			cents -=2;
		}
		else if (cents >= 1)
		{
			cents -=1;
		}

		num_of_coins += 1;
	}

	printf("%d\n",num_of_coins);
	return (0);
}
