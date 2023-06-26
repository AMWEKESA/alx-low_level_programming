#include "main.h"
/**
 * _puts - retund length of a string
 * @str: string whos length is t be retuned
 * Return: returns
 */
int _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);				}
		_putchar('\n');
}
