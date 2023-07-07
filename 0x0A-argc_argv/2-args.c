#include "main.h"
#include <stdio.h>

/**
 * main - prints argument
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: return success
 *
 */

int main(int argc, char *argv[])

{
	int i;
	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
