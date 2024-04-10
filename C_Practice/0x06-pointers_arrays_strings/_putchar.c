/******************************************************************
 * _putchar.c
 * _putchar()-takes char 
 * Return-char output
 * *****************************************************************/

#include "main.h"

char _putchar(char c)
{
	return(write(1,&c,sizeof(char)));
}
			
