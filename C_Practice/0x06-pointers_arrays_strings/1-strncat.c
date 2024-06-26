/******************************************************************
 * 1-strncat.c
 * _strncat()-concatnates a string upto n
 * Return-destination string
 * *****************************************************************/

#include "main.h"

char *_strncat(char *dest,char *src, int n)
{
	int i=0;
	int j=0;

	while(dest[i]!='\0')
	{
		i++;
	}
	while(src[j]!=src[n])
	{
		dest[i]=src[j];
		i++;
		j++;
	}
	dest[i]='\0';

	return(dest);
}
