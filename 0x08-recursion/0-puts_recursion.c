#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - is a protottype of the function
 * *s: variable that is called from the main
 * s: Has fall out 
 **/


void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}

	_putchar (*s);
	_puts_recursion(s + 1);
}
