/***********************************************************************************************************
 * 2-strlen_recursion.c
 * _strlen_recursion()-finds the length of a string
 * @s-string input
 * return-length of a string
 * ******************************************************************************************************/

#include "main.h"

int _strlen_recursion(char *s)
{
	/*Base Case; if null terminator is met*/
	if(*s=='\0')
	{
		return(0);
	}
	/*Recursion Base; return cumulated number of characters*/
	return(1+_strlen_recursion(s+1));
	
}
