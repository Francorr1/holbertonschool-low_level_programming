#include "main.h"
/**
 * create_file - Creates a file and writes the contents of text_content
 * @filename: The name to give the new file
 * @text_content: The content to write to the new file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int desc, i = 0, j = 0;
	char *buff;

	if (filename == NULL)
	{
		return (-1);
	}
	while (text_content && text_content[i] != '\0')
	{
		i++;
	}
	buff = malloc(i + 1);
	if (text_content)
	{
		for (j = 0; j <= i; j++)
		{
			buff[j] = text_content[j];
		}
	}
	desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (desc == -1)
	{
		free(buff);
		return (-1);
	}
	write(desc, buff, i);
	close(desc);
	free(buff);
	return (1);
}
