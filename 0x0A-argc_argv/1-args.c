#include "main.h"
#include <stdio.h>

/**
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
