/***********************************************************************************************************
 * 4-new_dog.c
 * new_dog()-creats a new object of dog_t
 * @name-name of the dog
 * @owner- owner of the dog
 * @age-Age of the dog
 *
 * return-Pointer to the newly created dog object
 * ******************************************************************************************************/

#include "dog.h"
#include <stdlib.h>
dog_t *new_dog(char *name,float age,char *owner)
{
	dog_t *new_dog;
	int i,j,k;

	new_dog=malloc(sizeof(dog_t));

	if(!(new_dog)||!(name)||!(owner))
	{
		free(new_dog);
	}

	/*Find the length of name and owner*/

	for(i=0;name[i]!='\0';i++)
		;
	for(j=0;owner[j]!='\0';j++)
		;

	/*Allocate memory for the variable*/
	new_dog->name=malloc(i+1);
	new_dog->owner=malloc(j+1);

	if(!(new_dog->name)||!(new_dog->owner))
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
	}
	/*Assigning contents of the input to new_dog*/

	for(k=0;k<i;k++)
	{
		new_dog->name[k]=name[k];
	}
	new_dog->name[k]='\0';/*Gives the null terminator to the last allocated space*/
	new_dog->age=age;

	for(k=0;k<j;k++)
	{
		new_dog->owner[k]=owner[k];
	}
	new_dog->owner[k]='\0';

	return(new_dog);
}
