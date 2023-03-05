#include "main.h"
/**
 * print_chessboard - Main function
 * @a: Address of a
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
	}
}
