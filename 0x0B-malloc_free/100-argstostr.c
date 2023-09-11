#include "main.h"
#include <stdlib.h>


/**
*
* argstostr = is a function that concatenates all argument of your program
* @ac : this is the argumetn that returns number of arguments
* @av : this is parses the added argumments
*
**/


char *argstostr(int ac, char **av)
{
		char *strcon;
		int i, j, len, bufferlen;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);

	i = j = len = bufferlen = 0;
	for (i = 0; av[j]; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	 strcon = (char *)malloc(len * sizeof(char) + ac + 1);

	if (strcon == NULL)
		return (NULL);
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; bufferlen++)
			strcon[bufferlen] = av[i][j];
		 strcon[bufferlen] = '\n';
		 bufferlen++;
	}
	strcon[bufferlen] = '\0';
	return (strcon);
}
