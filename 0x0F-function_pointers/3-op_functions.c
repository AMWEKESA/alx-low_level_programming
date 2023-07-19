#include "3-calc.h"
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * op_add - adds 2 integers
  *
  * @a: int to be added to b
  * @b: int to be added to a
  *
  * Return: return sum
  */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
* op_sub - returns the difference of 2 int
*
* @a: int whose difference with b is to be computed
* @b: int; whose difference with a is to be computed
*
* Return: difference
 */

int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}

 /**
 * op_mul - returns the product of 2 ints
 *
 * @a: int whose product with b is to be computed
 * @b: int whose product with a is to be computed
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);
}

/**
 * op_div - returns the divisssion of 2 int
 *
 * @a: int whose divission with b is to be computed
 * @b: int whose divission with a is to be computed
 *
 * Return: division
 */

int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
* op_mod - returns the modulus of 2 int
*
* @a: int whose modulus with b is to be computed
* @b: int whose modulus with a is to be computed
*
* Return: modulus
*/

int op_mod(int a, int b)
{
	int modu;

	modu = a % b;
	return (modu);
}
