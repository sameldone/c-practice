/******************************************************************
 * 0-strcat.c
 * _strcat()--concatnates two strings
 * Return-Concatnated sttring
 * *****************************************************************/

#include "main.h"

char *_strcat(char *dest,char *src)
{
	while(*dest!='\0')
	{
		dest++;
	}
	while(*src!='\0')
	{
		*dest++=*src++;
	}

	*dest='\0';
	return(dest);
}
