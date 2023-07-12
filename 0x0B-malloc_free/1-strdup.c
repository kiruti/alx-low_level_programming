#include "main.h"
#include <string.h>
#include <stdlib.h>



/**
 * _strdup - function return pointer of duplicated string
 *
 *
 * @str: the string that will be duplicated
 * Return: it will return the pointer of the duplicated string
 **/

char *_strdup(char *str)
{
	char *ptr;
	int len = strlen(str);

	if (str == NULL)
		return (0);


	ptr = (char *)malloc(len * sizeof(char));

		strcpy(ptr, str);

		if (s == NULL)
			return (0);

		free(ptr);
		return (ptr);
}
