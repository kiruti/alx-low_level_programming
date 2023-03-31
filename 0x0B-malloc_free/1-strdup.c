#include "main.h"
#include <string.h>
#include <stdlib.h>



/**
 *
 * _strdup - function return poointer of duplicated string
 *
 *
 * @str: the string that will be duplicated 
 **/

char *_strdup(char *str)
{

	char *ptr;
	int len = strlen(str);


	ptr = (char*)malloc(len *sizeof(char));

		strcpy(ptr , str);

		return (ptr);

}
