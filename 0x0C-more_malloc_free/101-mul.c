#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int main (int argc,char **argv)
{

	int i = 0;
	

	int mul = 0;


		mul = (int *)argv[i+1] * (int *)argv[i+2];
	printf("%d" , mul);

	return 0;

	
}
