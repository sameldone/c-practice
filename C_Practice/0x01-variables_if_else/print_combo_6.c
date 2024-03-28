#include <stdio.h>

int main(void)
{
	int first,second;

	for(first=0;first<=99;first++)
	{
		for(second=0;second<=99;second++)
		{
			putchar(first+'0');
			putchar(second+'0');
			putchar(' ');
		}
	}
	putchar('\n');
	
	return(0);
}
