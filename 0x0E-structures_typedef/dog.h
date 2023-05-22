#ifndef DOG_H
#define DOG_H
/**
  *struct dog - my dog info
  *@name: First name
  *@age:age
  *@owner: owners name
  *Description: struct dog with the following elements:
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
  *dog_t - typedef for struct dog
  */
typedef struct dog dog_t;

void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
  
#endif
