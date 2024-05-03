/***********************************************************************************************************
 * 100-argstostr.c
 * argstorstr()-concatnates the arguments of the program
 * @ac-argument count
 * @av-argument value
 * 
 * return-concatnated string of the arguments
 * ******************************************************************************************************/

#include "main.h"

char *argstostr(int ac,char **av)
{
	int i,j,k,l;
	char *result;

/*Find the length of the argument and allocate memory for it.*/
	for(i=0;i<ac;i++)
	{
		for(j=0;(av[i][j]='\0');j++)
		{
			k++;
		}
		k++;

	}


	result=malloc(sizeof(char)*(k+1));

	for(i=j=l=0;l<k;j++,l++)
	{
		if(av[i][j]=='\0')
		{
			result[l]='\n';
			i++;
			l++;
			j=0;
		}

		if(l<k-1)
		{
			result[l]=av[i][j];
		}

		result[l]='\0';
	}


		return(result);

}
