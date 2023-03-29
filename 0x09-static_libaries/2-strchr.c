#include"main.h"
#include <stddef.h>

/**
 *  *
 *   *
 *    * _strchr - a function that locates a character in a string
 *     * @s is the memroy pointer to the string
 *      * @c is the character that is being located in the string
 *       * /
 *        *
 *         **/

char *_strchr(char *s, char c)
{
	        for (;; s++)

			        if (*s == c)
					                return (s);

		        if (!*s)
				                return (0);

}
