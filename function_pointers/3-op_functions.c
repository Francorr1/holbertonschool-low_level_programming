#include "3-calc.h"
/**
 * op_add - Adds a to b
 * @a: an int
 * @b: another int
 *
 * Return: The result
 */
int op_add(int a, int b)
{
	int res;

	res = a + b;
	return (res);
}
/**
 * op_sub - Substracts a from b
 * @a: an int
 * @b: another int
 *
 * Return: The result
 */
int op_sub(int a, int b)
{
	int res;

	res = a - b;
	return (res);
}
/**
 * op_mul - Multiplies a by b
 * @a: an int
 * @b: another int
 *
 * Return: The result
 */
int op_mul(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}
/**
 * op_div - Divides a by b
 * @a: an int
 * @b: another int
 *
 * Return: The result
 */
int op_div(int a, int b)
{
	int res;

	res = a / b;
	return (res);
}
/**
 * op_mod - Does the module of a by b
 * @a: an int
 * @b: another int
 *
 * Return: The result
 */
int op_mod(int a, int b)
{
	int res;

	res = a % b;
	return (res);
}
