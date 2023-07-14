#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_isdigit - checks for digit frm 0 thr'9
  *
  *@x: character to be checked
  *
  *Return: 1 when gidit, else 0
  */

int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
	{
		return (1);
	}
	return (0);
}

/**
 * _strlen - retund length of a string
 * @s: string whos length is t be retuned
 * Return: returns 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
  * error - prints error message & exit with status 98
  *
  */

void error(void)
{
	char *error_msg;

	error_msg = "Error\n";

	while (*error_msg)
	{
		putchar(*error_msg);
		error_msg++;
	}
	exit(98);
}

/**
 * main - gets product ot 2 arguments passed an base 10
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: return success
 *
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
		error();
	{

		if (!_isdigit(argv[1][0]) || !_isdigit(argv[2][0]))
		{
			error();
		}
		else
		{
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);
			prod = num1 * num2;
			printf("%d\n", prod);
		}
	}

	return (0);
}
