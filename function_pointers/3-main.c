#include "3-calc.h"
/**
 *
 */
int main(int argc, char *argv[])
{
	int a, b, res;
	char *op;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	op_func = get_op_func(op);
	res = op_func(a, b);
	printf("%d\n", res);
	return (0);

}
