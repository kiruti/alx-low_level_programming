#include "main.h"
#include <string.h>

/**
 *
 * _strstr : is a function that finds the first occurrence of the substring
 * @needle - this is the substring that will be located from the main string
 * @haystack - this is the main string
 *
 *
 **/

char *_strstr(char *haystack, char *needle)
{

	int lenh = strlen(haystack);
	int lenn = strlen(needle);
	int flag, i, j;

	for(i = 0; i < lenh; i++)
		if (haystack[i] == needle[0])
		{
			flag = 0;
			for(j = 0; j < lenn; j++)
			{
				if (haystack[i + j] != needle[j])
				{
				flag = 1;
				break;
				}
			}
			if (flag == 0)
			{
				return (0);
			}
		}
	return (char *) -1;

}
