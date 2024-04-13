/******************************************************************
 * 3-strcmp.c
 * _strcmp()-compares two strings
 * Return- 0 if the same and the difference between the string if 
 * 	   they are different.
 * *****************************************************************/

#include "main.h"

int _strcmp(char *str1,char *str2)
{
	int i;

	for(i=0;((str1[i]!='\0')||(str2[i]!='\0'));i++)
	{
		if(str1[i]!=str2[i])
		{
			return((str1[i]-str2[i]));
		}
		else
		{
			return(0);
		}
	}
	return(0);
}

