#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing dog information
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: description of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
