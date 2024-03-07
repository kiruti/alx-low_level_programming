#include "main.h"

/**
 *  *_memcpy - copies memory area
 *   *@dest: destination memory area
 *    *@src: source memory area
 *     *@n: n of bytes to copu
 *      *
 *       *Return: pointer to dest
 *        */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		while (n--)
					dest[n] = src[n];

			return (dest);
}
