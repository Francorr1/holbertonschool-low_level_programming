#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int ret;
	int i;
	long val;
	char *next[100];
	int res = 0;

	if (argc == 1)
	{
		printf("0\n");
		ret = 0;
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			val = strtol(argv[i], &next, 10);
			if ((*next == argv[i]) || (next != '\0'))
			{
				printf("Error");
				ret = 1;
				break;
			}
			else
			{
				res += val;
			}
		}
		if (i == argc)
		{
			printf("%d\n", res);
			ret = 0;
		}
	}
	return (ret);
}
