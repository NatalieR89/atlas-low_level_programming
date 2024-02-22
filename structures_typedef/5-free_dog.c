#include "dog.h"

/**
 * free_dog - Frees allocated mem for struct dog
 * @d: Pointer to struct do to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
