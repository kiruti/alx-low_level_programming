#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/***
* str_concat - ssfunction concatenates two strings
*
* @s1: first strioing to be concatenated
* @s2: second string to be concatenated
*
**/

char *str_concat(char *s1, char *s2)
{

	int x, y;
	char *ptr;
	char *string;
	int length = 0;


	x = strlen(s1);
	y = strlen(s2);

	length = x + y;

	ptr = (char*)malloc(length * sizeof(char));

	string  = strcat(s1, s2);

	ptr = string;

	return  (ptr);
}
