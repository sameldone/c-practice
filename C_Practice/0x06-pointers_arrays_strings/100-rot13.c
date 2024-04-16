/******************************************************************
 * 100-rot13.c
 * rot13()-ciphers texts by rotating them with the 13th correspondent
 * @str-string to be ciphered
 * *****************************************************************/

#include "main.h"

char *rot13(char *str)
{
	int i,j;
	char a[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[]="nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;a[j]!='\0';j++)
		{
			if(str[i]==a[j])
			{
				str[i]=b[j];
				break;
			}
		}
	}
	return(str);
}
