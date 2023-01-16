#ifndef STRTYP
#define STRTYP

/**
 * struct dog - structure of a dog
 * @name: name of dog.
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	int age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, int age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, int age, char *owner);
void free_dog(dog_t *d);

#endif /*STRTYP*/
