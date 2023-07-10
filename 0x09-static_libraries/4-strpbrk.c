#include "main.h"
#include <stddef.h>

/**
 *  _strpbrk : function that searches a string for any of a set of bytes
 *  @_s - is the main string that is used to compeare the string
 *  @accept - is the string that is being compeared to
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

 if(s == NULL || accept == NULL)
	{
		return (0);
	}
	while (*s != '\0')
		{	
		temp = accept;
		while (*temp != '\0')
			{
			if(*s == *temp)
			{
				return (char *)s;
			}
			temp++;
			}

		}
	return (0);
}
