/******************************************************************
 * 3-puts.c
 * _puts()-prints a string and a new line
 * Return-void
 * *****************************************************************/

#include "main.h"

void _puts(char *str)
{
	int length=_strlen(str);

	write(1,str,length);
	write(1,"\n",1);
}

