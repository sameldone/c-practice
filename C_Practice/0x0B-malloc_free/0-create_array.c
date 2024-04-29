/***********************************************************************************************************
 * 0-create_array.c
 * create_array()-prints an array of character size times
 * @size-the size of the array
 * @c-character to be printed
 * return-charater
 * ******************************************************************************************************/

#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size,char c)
{

	unsigned int i;
	char *ch=malloc(sizeof(c)*size);

	if(size==0)
	{
		return(NULL);
	}

	if(ch==NULL)
	{
		return(NULL);
	}


	for(i=0;i<size;i++)
	{
		ch[i]=c;
	}

	return(ch);
	
}
