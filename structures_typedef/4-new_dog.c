#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - creates new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: name of the owner
  *
  * Return: new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cutie_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		cutie_dog = malloc(sizeof(dog_t));

		if (cutie_dog == NULL)
			return (NULL);

		cutie_dog->name = malloc(sizeof(char) * name_l);

		if (cutie_dog->name == NULL)
		{
			free(cutie_dog);
			return (NULL);
		}

		cutie_dog->owner = malloc(sizeof(char) * own_l);

		if (cutie_dog->owner == NULL)
		{
			free(cutie_dog->name);
			free(cutie_dog);
			return (NULL);
		}

		cutie_dog->name = _strcpy(cutie_dog->name, name);
		cutie_dog->owner = _strcpy(cutie_dog->owner, owner);
		cutie_dog->age = age;
	}

	return (cutie_dog);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int b = 0;

	for (; *s != '\0'; s++)
	{
		b++;
	}

	return (b);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a++] = '\0';

	return (dest);
}
