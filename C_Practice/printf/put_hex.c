/**********************************************************************************************************
 * put_hex.c
 * put_hex()-prints hex values
 *
 * return-int
 * **********************************************************************************************************/

#include "main.h"

int put_hex(va_list args)
{
        int i,count=0,tmp;
        int *array;
        unsigned int num;

        num=va_arg(args,unsigned int);
        tmp=num;

        while((num/16)!=0)
        {
                num /= 16;
                count++;
        }
        count++;

        array=malloc(sizeof(unsigned int)*count);

        if(!array)
        {
                free(array);
                return(-1);
        }
        for(i=0;i<count;i++)
        {
                array[i]=tmp%16;
                tmp /=16;
        }
        for(i=(count-1);i>=0;i--)
        {
			if(array[i]>9)
			{
				array[i]=array[i]+39;
			}

                _putchar(array[i]+'0');
        }

        free(array);

        return(count);
}


