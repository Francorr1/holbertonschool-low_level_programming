#include "main.h"
/**
 *
 */
int main(int argc, char *argv[])
{
	int origin, dest, conto, contd, closeo;
	char *buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	origin = open(argv[1], O_RDONLY);
	if ((conto = read(origin, buff, sizeof(buff))) != 0)
	{
		contd = write(dest, buff, conto);
	}
	if (origin == -1 || conto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1 || contd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	closeo = close(origin);
	if (closeo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", origin);
		exit(100);
	}
	return(0);
}
