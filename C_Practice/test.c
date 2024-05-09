#include <stdio.h>

int print_int(int n)
{
	int i,num,last,exp,digit;
	i=1;
	exp=1;

	last=n/10;
	num=n;

	if(last<0)
	{
		putchar('-');
		last=-last;
		num=-num;
		n=-n;
		i++;
	}

	if(num>0)
	{
		while(num/10!=0)
		{
			exp=exp*10;
			num=num/10;
		}
		num=n;
		while(exp>0)
		{
			digit=num/exp;
			putchar(digit+'0');
			num=num-(digit*exp);
			exp=exp/10;
			i++;
		}
	}
	putchar(last+'0');
	return(i);
}

int main()
{
	print_int(123456);

	return(0);
}

