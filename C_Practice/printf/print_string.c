/**********************************************************************************************************
 * print_string.c
 * print_Str()-prints string containing non printable characters.
 *
 * return-int
 * **********************************************************************************************************/

#include "main.h"

int print_Str(va_list args)
{
        char *str;
        int i;
		int process,len;

        str=va_arg(args,char *);

        if(str==NULL)
        {
                str="(null)";

                for(i=0;str[i]!='\0';i++)
                {
                        _putchar(str[i]);

                }
                str='\0';
                return(_strlen(str));
        }
        else
        {
                for(i=0;str[i]!='\0';i++)
                {
					if(str[i]<32||str[i]>=127)
					{
						_putchar('\\');
						_putchar('x');
						len+=2;
						process=str[i];

						if(process<16)
						{
							_putchar('0');
							len++;
						}
						len++;
						
					}
					else
					{
                        _putchar(str[i]);
					}
                }
                str='\0';
                return(_strlen(str));
        }
}

