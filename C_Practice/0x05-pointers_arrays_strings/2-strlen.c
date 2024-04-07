/******************************************************************
 * 2-strlen.c
 * _strlen()-prints the length of string
 * Return-length of string
 * *****************************************************************/

#include "main.h"

int _strlen(char *str)
{
	/* str is address while *str is value of*/
	int i;

	for(i=0;*str!='\0';i++)/*checks if the value of str at that particular address is a end of string*/
	{
		str++;/* Increments the address by 1. if the address was 1000 and its an integer, it will probably be 1004 and so on*/
	
	}
	return(i);
}
