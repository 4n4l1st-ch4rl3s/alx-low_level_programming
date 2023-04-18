#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -Entry point
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n, l, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;
	dog->name = malloc(n * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (l = 0; owner[l]; l++)
		;
	l++;
	dog->owner = malloc(l * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < l; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
