/******************************************************************
 * 101-natural.c
 * natural()-prints sum of all multiples of 3 and 5 from 1 to 1023
 * Return-void
 * *****************************************************************/

#include "sameldone.h"
#include <stdio.h>

void natural(void)
{
	int num;
	int total=0;
	int tmp;
	int tmp1;
	for(num=0;num<=1023;num++)
	{
		if((num%3==0||num%5==0)&&(num>0))
			{
					total+=num;
					/*printf("%d, ",num);*/
				if(num<=9)
				{
					_putchar(num+'0');
					_putchar(',');
					_putchar(' ');
				}

				else if(num>9&&num<100)
				{
					/*printf("%d, ",num);*/

					_putchar(num/10+'0');
					_putchar(num%10+'0');
					_putchar(',');
					_putchar(' ');
				}
	
				else if(num>99&&num<1000)
				{
					/*printf("%d, ",num);*/
					tmp=num/10;
					_putchar(tmp/10+'0');
					_putchar(tmp%10+'0');
					_putchar(num%10+'0');
					_putchar(',');
	
					_putchar(' ');
				}
				else if(num>999)
				{
					/*printf("%d, ",num);*/
					tmp=num/100;
					tmp1=num%1000;
					_putchar(tmp/10+'0');
					_putchar(tmp%10+'0');
					_putchar(tmp1/10+'0');
					_putchar(tmp1%10+'0');
					_putchar(',');
					_putchar(' ');
							
				}
			}
		
		/*_putchar('\n');*/
	
	}
	printf("%d",total);

}
