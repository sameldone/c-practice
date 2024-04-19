/***********************************************************************************************************
 * 5-strstr.c
 * _strstr()-finds the first occurence of the substring needle in the string haystack.
 * @haystack-The whole string
 * @needle-The substring
 * return-string of first occurence of needle
 * *************************************************************************************************/

#include "main.h"

char *_strstr(char *haystack,char *needle)
{
	int i;
	char *p;

	for(i=0;haystack[i]!='\0';i++)
	{
		if(haystack[i]==needle[0])
		{
			p=&haystack[i];
			haystack++;
			return(p);

		}
	}
	return(NULL);
}
