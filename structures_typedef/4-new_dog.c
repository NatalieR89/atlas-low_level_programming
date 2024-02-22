#include "dog.h"
#include <stdlib.h>
/**
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));
	
	if (!newDog)
		return (NULL);


	newDog->name = malloc(strlen(name) + 1);
	if (!newDog->name)
	{
		free(newDog);
		return (NULL);
	}

	strcpy(newDog->name, name);


	newDog->owner = malloc(strlen(owner) + 1);

	if (!newDog->owner)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	strcpy(newDog->owner, owner);

	newDog->age = age;

	return (newDog);
}
