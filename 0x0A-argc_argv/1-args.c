#include "main.h"
#include <stdio.h>

/**
 * main - prints arguments passe into it
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: return success
 *
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
