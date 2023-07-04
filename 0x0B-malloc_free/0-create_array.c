#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array
 * and populates it
 * @size: number of bytes to allocate
 * @c: an element of the array to initialize
 *
 * Return: 0 on success
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
