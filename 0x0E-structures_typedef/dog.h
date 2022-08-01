#ifndef _DOG_H_
#define _DOG_H_
/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;
/**
 * struct dog - store information of a dog
 * @name: name pf dog
 * @age: age of dog
 * @owner: dog owner
 * Description: attributes of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
