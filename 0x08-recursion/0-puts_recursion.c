#include "main.h"

/**
 * _put_recursion - prints a string followed by a new line 
 * @s: string to print
 *
 * Return: void 
 *
 */
void _puts_recusion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	
	}	
	_putchar(*s);
	_puts_recursion(s+1);
}
