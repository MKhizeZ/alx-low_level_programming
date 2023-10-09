#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Counts string length
 * @s: Input string
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}

/**
 * *_strcpy - Copies string pointed to,
 * to the buffer pointed to by dest
 * @dest: Pointer to the buffer
 * @src: String to be copy
 *
 * Return: Dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int size, iter;

	size = 0;

	while (src[size] != '\0')
	{
		size++;
	}
        
	iter = 0;
	while (iter < size)
	{
		dest[iter] = src[iter];
		iter++;
	}
	dest[iter] = '\0';

	return (dest);
}

/**
 * new_dog - Creates the new dog
 * @name: Dog name member
 * @age: Dog age member
 * @owner: Dog owner member
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name1_len, name2_len;

	name1_len = _strlen(name);
	name2_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (name1_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (name2_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
