/***********************************************************************************************************
 * 2-str_concat.c
 * str_concat()-concatnates two strings
 * @s1-first string input
 * @s2-second string input
 * return-concatnated string
 * ******************************************************************************************************/

#include "main.h"

char *str_concat(char *s1,char *s2)
{

	unsigned int i,j,k,l;
	char *newstr;

	if(s1==NULL)
		return(NULL);
	if(s2==NULL)
		return(NULL);


	for(i=0;s1[i]!='\0';i++)
		;
	for(j=0;s2[j]!='\0';j++)
		;


	newstr=(char *malloc(sizeof(char)*(i+1+j));

	if(newstr==NULL)
	{
		free(newstr);
		return(NULL);
	}
	for(k=0;k<i;k++)
	{
		newstr[k]=s1[k];
	}
	for(l=0;l<j;k++,l++)
	{
		newstr[k]=s2[l];
	}

	return(newstr);

}
