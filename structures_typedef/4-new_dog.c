#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * newDog - ...
 * @name: Name of dog
 * @age: age of dog
 * @owner: Name of the owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		newDog = malloc(sizeof(dog_t));

		if (newDog == NULL)
			return (NULL);

		newDog->name = malloc(sizeof(char) * name_l);

		if (newDog->name == NULL)
		{
			free(newDog);
			return (NULL);
		}

		newDog->owner = malloc(sizeof(char) * own_l);

		if (newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog);
			return (NULL);
		}

		newDog->name = _strcpy(newDog->name, name);
		newDog->owner = _strcpy(newDog->owner, owner);
		newDog->age = age;
	}

	return (newDog);
}


int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
