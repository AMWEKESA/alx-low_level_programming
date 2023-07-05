#include "main.h"
#include <string.h>


/**
 * _strlen_recursion - prints a string recursively
 * @s: pointer to string whose length's to be returned
 * Return: a function
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
