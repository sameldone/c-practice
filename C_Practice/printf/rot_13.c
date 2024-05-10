/******************************************************************
 * 100-rot13.c
 * rot13()-ciphers texts by rotating them with the 13th correspondent
 * @str-string to be ciphered
 * *****************************************************************/

#include "main.h"

int rot13(va_list args)
{
        int i,j,count=0;
		char *str;
        char a[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char b[]="nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

		str=va_arg(args,char *);

		if(!str)
		{
			str="(null)";
			for(i=0;str[i]!='\0';i++)
			{
				_putchar(str[i]);
				count++;
			}
		}

        for(i=0;str[i]!='\0';i++)
        {
                for(j=0;a[j]!='\0';j++)
                {
                        if(str[i]==a[j])
                        {
                                str[i]=b[j];
								_putchar(str[i]);
								count++;
                                break;
                        }
                }
        }
        return(count);
}
