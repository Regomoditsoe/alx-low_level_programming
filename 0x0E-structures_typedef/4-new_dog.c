#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - length of string
 * @str: string to be measured
 * Return: length of string
 */
int _strlen(char *str)
{

	int len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * *_strcopy - A function that copies a string
 * @dest: location of copied string
 * @src: the source of the string
 * Return: pointer
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * *new_dog - A function that creates a new dog
 * @name: copy to be stored
 * @owner: copy to also be stored
 * @age: age of the dog
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = _strcopy(d->name, name);
	d->age = age;
	d->owner = _strcopy(d->owner, owner);

	return (d);
}
