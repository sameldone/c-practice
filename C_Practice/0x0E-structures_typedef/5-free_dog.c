/***********************************************************************************************************
 * 5-free_dog.c
 * free_dog()-fress the object dog
 * @d
 *
 * return-void
 * ******************************************************************************************************/

#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
