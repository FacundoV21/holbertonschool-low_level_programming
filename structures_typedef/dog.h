#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - dog
 * @name: name of the dog
 * @age: age "          "
 * @owner: owner "      "
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
