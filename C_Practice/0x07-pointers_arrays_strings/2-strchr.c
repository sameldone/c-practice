/******************************************************************
 * 2-strchr.c
 * _strchr()-checks for the first occurence of a character in a 
 * string.
 * @str-the string input.
 * @c-character we are checking for.
 * return-the character if found and NULL if not found
 * *****************************************************************/

#include "main.h"

char *_strchr(char *str,char c)
{
	int i;
	char *p;

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
			p=&str[i];
			return(p);
		}
	}
	return(NULL);
}
