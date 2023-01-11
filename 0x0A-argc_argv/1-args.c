#include <stdio.h>
#include <stdlib.h>

/** This program prints the number of arguments passed into it
 * The program prints a number followed by a new line
 * Return : Number of Arguments passed into it
 */
int main(int argc, char *argv[])
{
	int count;
	for (count = 0; count<argc; count++)
		printf("argv[%d]: %s\n",count,argv[count]);
	return 0;
}
