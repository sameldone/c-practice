#include "3-calc.h"

int main(int argc,char *argv[])
{
	int (*operations)(int,int);
	int a,b;

	if(argc!=4)
	{
		printf("Error\n");
		exit(98);
	}
	if(argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	
	operations=get_op_func(argv[2]);

	if(operations==NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a=atoi(argv[1]);
	b=atoi(argv[3]);

	printf("%d\n",operations(a,b));
	return(0);

}
