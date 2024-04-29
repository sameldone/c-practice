/***********************************************************************************************************
 * 1-strdup.c
 * _strdup()-returns a pointer to a new string which is duplicate to the string given
 * @str-string input 
 * return- pointer to string 
 * ******************************************************************************************************/

#include "main.h"

char *_strdup(char *str)
{


	unsigned int i,j;
	char *strg;

	if(str==NULL)
	{
		return(NULL);
	}
	/*Get the length of the string and store it in i*/
	for(i=0;str[i]!='\0';i++)
		;

	strg=(char *)malloc(sizeof(char)*(i+1));/*Add 1 to get the actual length of the string */
	/*Duplicate the original string to our new string*/

	if(strg==NULL)
	{
		return(NULL);
	}
	
	for(j=0;j<=i;j++)
	{

		strg[j]=str[j];

	}

	return(strg);
}
