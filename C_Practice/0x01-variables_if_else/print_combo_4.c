/******************************************************************
 * print_combo_4.c
 * main()-Prints a combination of three digit 
 * Return- Always 0
 * *****************************************************************/

#include <stdio.h>

int main(void)
{
	int first,second,third;

	for (first=0;first<=9;first++)
	{
		for (second=first+1;second<=9;second++)
		{
			for (third=second+1;third<=9;third++)
			{
				putchar(first+'0');
				putchar(second+'0');
				putchar(third+'0');

				if(!(first==7&&second==8&&third==9))
				{
					putchar(',');
				}
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
