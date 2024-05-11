/**********************************************************************************************************
 * putchar.c
 * _putchar()-prints a char like putchar function in stdio.h
 *
 * return-The char given
 * **********************************************************************************************************/

#include "main.h"

int _putchar(char ch)
{
	return(write(1,&ch,1));
}
