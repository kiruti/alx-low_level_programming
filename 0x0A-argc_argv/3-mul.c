#include <stdio.h>
#include <stdlib.h>
/**
*
* @argv: takes strings inputed from the out side
* @argc: take count of the string being inpuuted
*
**/

int main(int argc, char *argv[])
{
	int mult = 1;
	int count;


		for (count = 1; count < argc; count++)
			{
		int num = atoi(argv[count]);
		mult = mult * num;

		printf("%d \n", mult);

			}
		return (0);

}
