#include "main.h"

/**
 *  *_strstr -  locates a substring
 *   *
 *    *@haystack: string where substring will be locatedg
 *     *@needle: string to located
 *      *
 *       *Return: pointer to beginning of the located substring, Null if else
 *        */

char *_strstr(char *haystack, char *needle)
{
		int i = 0, j = 0;

			while (haystack[i] != '\0')
					{
								while (haystack[i + j] == needle[j])
											{
															j++;
																	}

										if (needle[j] == '\0')
													{
																	return (&haystack[i]);
																			}

												i++;
													}
				return (0);
}
