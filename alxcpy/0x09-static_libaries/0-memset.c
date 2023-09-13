#include "main.h"

/**
 *  * *_memset - function that fills memory with a constant byte
 *   * @s - this is the pointer that points to the memory allocation
 *    * @b - the character variable that will be placed int he memory space
 *     * @n - is the size of the memory that needs alocation.
 *      *
 *       **/

char *_memset(char *s, char b, unsigned int n)
{

	        unsigned int i;

		        char *str = (char*) s;

			        for(i = 0; i < n; i++)
					                str[i] = b;

				        return 0;
}
