/******************************************************************
 * 2-strncpy.c
 * _strncpy()-copies a string
 * Return-string in the destination
 * *****************************************************************/

#include "main.h"

char *_strncpy(char *dest,char *src,int n)
{
	int i;

	for(i=0;src[i]!=src[n];i++)
	{
		dest[i]=src[i];
	}
	
/*	dest[i]='\0';*/

	return(dest);
}
