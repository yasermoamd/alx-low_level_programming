#ifndef DOG_H
#define DOG_H
/**
 * struct dog - The dog main struct.
 * @name: the dog name.
 * @age: the dog age.
 * @owner: the dog owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef dog dog_t;

#endif
