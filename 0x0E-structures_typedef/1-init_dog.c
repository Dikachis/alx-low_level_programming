#include "dog.h"

/**
 * init_dog - initializes a structure of type dog
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: void
 */

{
	if (d) // or it can be express this way, if (d ! = NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
