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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
