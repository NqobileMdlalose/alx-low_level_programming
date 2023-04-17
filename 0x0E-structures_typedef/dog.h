#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - my_dog
 * @name: member 1
 * @age: member 2
 * @owner: member 3
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
