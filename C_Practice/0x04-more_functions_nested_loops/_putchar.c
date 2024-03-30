/******************************************************************
 * _putchar.c
 *Return- prints character. Similar to putchar()
 *****************************************************************/

#include "main.h"
#include <unistd.h>

int _putchar(char ch)
{
	return(write(1,&ch,1));
}
