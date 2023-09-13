#include <stdio.h>

/**
 *
 * @argv: this a vector argument that has the string stroed
 * @argc: this argument count that counts the number arguments provided
 *
 *
 *
 *
 *
 *
 **/

int main (int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s \n", argv[count]);
	}

	return (0);
}
