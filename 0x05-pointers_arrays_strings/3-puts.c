#include "main.h"
/**
 * int _strlen - retund length of a string
 * @str: string whos length is t be retuned
 * Return: returns
 */
int _strlen(char *str)
{
	while (str != '\0')
	{
		_putchar(*str++);				}
		_putchar('\n');
}
