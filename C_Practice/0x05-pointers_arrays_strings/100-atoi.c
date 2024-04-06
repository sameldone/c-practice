/******************************************************************
 * 100-atoi.c
 * _atoi()-converts string to integer
 * Return-Integer of the string given
 * *****************************************************************/

#include "main.h"

int _atoi(char *s)
{
	unsigned int total=0;
	int sign=1;

	do{
		if(*s=='-')
		{
			sign *=-1;
		}
		else if(*s>='0'&&*s<='9')
		{
			total=(total*10)+(*s-'0');
		}
		else if(total>0)
		{
			break;
		}
	}while(*s++);
	
	return(total*sign);
}
