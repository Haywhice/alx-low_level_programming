#include "main.h"

/**
 * main - program that prints the numbers from 1 to 100
 * But for multiples of three print Fizz
 * and for the multiples of five print Buzz
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
