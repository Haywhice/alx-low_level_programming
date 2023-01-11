#include <stdio.h>
#include <stdlib.h>

/** This program prints its name
 * followed by a new line
 * Return : Name of the program
 */

int main(int argc, char *argv[])
{

	printf("%s\n", argv[argc - 1]);

	return 0;
}
