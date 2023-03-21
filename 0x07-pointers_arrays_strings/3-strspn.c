#include"main.h"
#include <stdbool.h>
#include <string.h>

/*
 * _strspn - function that counts number of same chracters in diffrent strings
 * @s : this is the first string that needs compearing to
 * @accept : this is the second string that is used to compear
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int initial_length = 0;
	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);
	unsigned int i;
	unsigned int j;

	for (i = 0; i < len1; i++)
	{
		bool found_match = false;

		for (j = 0; j < len2; j++)
			if (accept[j] == s[i])
			{
				found_match = true;
				break;
			}
		if  (!found_match)
			break;

		else
			initial_length++;

	}
	return (initial_length);

}
