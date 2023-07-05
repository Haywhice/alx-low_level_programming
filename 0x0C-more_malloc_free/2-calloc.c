#include "main.h"
#include <stdlib.h>

/**
 * _memset - copy char
 * @nmemb: number of elements.
 * @size: size of bytes.
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, return NULL
 * if malloc fails, return NULL.
 */

char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }
        return (s);
}

/** _calloc - allocates memory for an array using malloc
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        void *p;

        if (nmemb == 0 || size == 0)
                return (NULL);
        p = malloc(nmemb * size);

        if (p == NULL)
                return (NULL);
       	_memset(p, 0, (nmemb * size));
        return (p);
}
