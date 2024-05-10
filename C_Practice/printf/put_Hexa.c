/**********************************************************************************************************
 * put_Hexa.c
 * put_Hexa()-prints hex values
 *
 * return-int
 * **********************************************************************************************************/

#include "main.h"

int put_Hexa(unsigned int num)
{
        int i,count=0,tmp;
        int *array;

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
                                array[i]=array[i]+7;
                        }

                _putchar(array[i]+'0');
        }

        free(array);

        return(count);
}

