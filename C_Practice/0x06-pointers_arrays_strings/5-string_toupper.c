/******************************************************************
  5-string_toupper.c
 * string_toupper()-changes a string from lowercase to uppercase
 *@str-string argument
 * return-string converted to uppercase
 * *****************************************************************/

#include "main.h"

char *string_toupper(char *str)
{
	int i;

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}

	return(str);
}
