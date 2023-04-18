#ifndef dog_h
#define dog_h

/**
 * struct dog - Definition of the dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Description: The dog struct defines the properties of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
