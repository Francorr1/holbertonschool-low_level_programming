#include <stdio.h>
/**
 * main - Entry point
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	while (argv[0])
		break;
	argc--;
	printf("%d\n", argc);
	return (0);
}
