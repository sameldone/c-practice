#include <stdio.h>

int main()
{
	int first,second,third,fourth;
	int opp1,opp2;
	first=second=third=fourth=48;

	while(first<50)
	{
		second=48;
		printf("first is ");
		putchar(first);
		putchar('\n');
		while(second<50)
		{
			third=48;
			printf("second is ");
			putchar(second);
			putchar('\n');
			
			while(third<50)
			{

				fourth=48;
				printf("third is ");
				putchar(third);
				putchar('\n');

				
				while(fourth<50)
				{

					opp1=(first*10)+second;
					opp2=(third*10)+fourth;

					printf("fourth is ");
					putchar(fourth);
					putchar('\n');
					printf("opp1 is %c and opp2 is %c\n",opp1,opp2);
					fourth++;
				}
		
				third++;
			}
			second++;
		}
		first++;
	
	}
	return (0);
}
