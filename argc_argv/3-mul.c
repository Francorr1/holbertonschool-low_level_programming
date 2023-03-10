#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 in error
 */
int main(int argc, char *argv[])
{
	int ret;
	int res;
	long arg;
	int num1;
	int num2;

	if (argc == 3)
	{
		arg = strtol(argv[1], NULL, 10);
		num1 = arg;
		arg = strtol(argv[2], NULL, 10);
		num2 = arg;
		res = num1 * num2;
		printf("%d\n", res);
		ret = 0;
	}
	else
	{
		printf("Error\n");
		ret = 1;
	}
	return (ret);
}
