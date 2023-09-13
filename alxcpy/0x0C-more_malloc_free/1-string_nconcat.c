#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/**
 * string_nconcat - function that concatenates two strings together
 *
 * @s1: varaible containing the first string
 * @s2: variable containing the second string]
 * @n: Variable will make it run
 * Return: pinter of space of the concatenated string
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length + s2_length + 1;
	char *s = malloc(n * sizeof(char));
	int i = 0;


	for (i = 0; i < s1_length; i++)
		s[i] = s2[i];

	for (i = 0; i < s2_length; i++)
		s[s1_length + i] = s2[i];

	s[size - 1] = '\0';

	if (s == NULL)
		return (NULL);
	return (s);

}
