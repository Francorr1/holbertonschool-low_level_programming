#include "main.h"
/**
 * append_text_to_file - Adds text to the end of a file
 * @filename: File to add the text to
 * @text_content: What to add to the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0, j = 0;
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
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		free(buff);
		return (-1);
	}
	write(file, buff, i);
	close(file);
	free(buff);
	return (1);
}
