#include "main.h"

/**
 * _puts - print strings
 * @str: function parameter
 * Return: 0
 */

void _puts(char *str)

{
	for (; *str != '\0' ; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
