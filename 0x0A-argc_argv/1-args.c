#include <stdio.h>

/**
 *
 *
 * @argc: is used to tcount the variables
 * @argv: is argument vector , an array that is used.
 *
 **/

int main(int argc, char *argv[])
{
	int count;

	(void) argv;

	for (count = 0; count < argc; count++)
	{
		printf("%d \n", count);
	}
	return (0);
}
