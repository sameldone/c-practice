/***********************************************************************************************************
 * putchar.c
 * _putchar()-prints a char
 * return-char input
 * *************************************************************************************************/

#include "main.h"

char _putchar(char ch)
{
	return(write(1,&ch,1));
}
