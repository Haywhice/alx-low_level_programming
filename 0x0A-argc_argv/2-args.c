#include <stdio.h>
#include <stdlib.h>

/** Program that prints all arguments it receives
 * It prints one argument per line, ending with a new line
 * Return : All arguments it receives
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)

	printf("argv = %s\n",argv[i]);

	return 0;
}
