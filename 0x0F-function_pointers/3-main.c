#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
  * main - calls pointers to other function that do math operations
  *
  * @argc: argument counter
  * @argv: argument vector
  *
  * Return: return an int
  */

int main(int argc, char *argv[])
{
	int x,y;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	op = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		return (2);
	}



	printf("%d\n", get_op_func(op)(x, y));
	return (0);
}
