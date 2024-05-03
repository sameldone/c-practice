/***********************************************************************************************************
 * 2-print_dog.c
 * print_dog()-prints the properties of a dog
 * @d-dog struct
 *
 * return-void
 * ******************************************************************************************************/
#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
	if(d)
	{
		if(!(d->name))
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n",d->name);
		}
		if(!(d->age))
		{
			printf("Age: (nil)");
		}
		else
		{
			printf("Age: %f\n",d->age);
		}
		if(!(d->owner))
		{
			printf("Owner: (nil)");
		}
		else
		{
			printf("Owner: %s\n",d->owner);
		}
	}


}
