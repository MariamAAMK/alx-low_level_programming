#ifndef DOG
#define DOG

/**
 * struct dog - new data type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
