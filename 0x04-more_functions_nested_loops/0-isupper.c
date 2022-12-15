#include "main.h"

/**
 * _isuper - function that checks if the character is uppercase
 * @c: input value to check
 * Return: int.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
