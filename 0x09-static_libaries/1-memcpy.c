#include"main.h"
/**
 *  *
 *   *  _memcpy - write a function that copies memory area
 *    *  @dest : memroy copied to this variabel
 *     *  @src : memory space to be copied from
 *      *  @n : the number of memroy spcae needed
 *       *
 *        */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	        char *csrc = (char *) src;
		        char *cdest = (char *) dest;
			        unsigned int i = 0;

				        for (i = 0; i < n; i++)
						                cdest[i] = csrc[i];

					        return (0);
}
