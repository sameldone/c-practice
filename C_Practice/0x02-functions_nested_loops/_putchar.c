/******************************************************************
 * _putchar.c
 * _putchar()-Return 1 byte input
 * *****************************************************************/
#include "sameldone.h"
#include <unistd.h>

int _putchar(char ch)
{

	return (write(1,&ch,1));
			
}
