#include <stdio.h>
#include <stdlib.h>

/**
 *
 * @argc: this is the variable thath counts its outer output
 * @argv: thisis is the best disadvantage
 **/

int main(int argc, char *argv[])
{
	int sum = 0;
	int count;
       	int num;

	for (count = 1; count < argc; count++)
	{
		num = atoi(argv[count]);

		sum = sum + num;

		printf("%d \n", sum);

	}

	return (0);
}
