/******************************************************************
 * main()
 *
 * Returns-Always 0
 * *****************************************************************/
#include <stdio.h>

int main()
{
	char character;
	int integer;
	long int along_integer;
	long long int a_long_long_integer;
	float a_float;

	printf("Size of a char is: %lu byte(s)\n",sizeof(character));
	printf("Size of an int is: %lu byte(s)\n",sizeof(integer));
	printf("Size of a long integer is: %lu byte(s)\n",sizeof(along_integer));
	printf("Size of a long long integer is: %lu byte(s)\n",sizeof(a_long_long_integer));
	printf("Size of a float is: %lu byte(s)\n",sizeof(a_float));

	return(0);
}
