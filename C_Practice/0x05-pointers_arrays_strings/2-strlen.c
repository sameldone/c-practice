/******************************************************************
 * 2-strlen.c
 * _strlen()-prints the length of string
 * Return-length of string
 * *****************************************************************/

#include "main.h"

int _strlen(char *str)
{
	int i;

	for(i=0;*str!='\0';i++)
	{
		str++;
	
	}
	return(i);
}
