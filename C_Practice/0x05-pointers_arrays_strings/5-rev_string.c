/******************************************************************
 * 5-rev_string.c
 * rev_string()-reverses a string
 * Return-void
 * *****************************************************************/

#include "main.h"

void rev_string(char *str)
{
	int i,len,tmp;
	len=_strlen(str);

	
	for(i=0;i<len/2;i++)
	{
		tmp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=tmp;

	}
}
