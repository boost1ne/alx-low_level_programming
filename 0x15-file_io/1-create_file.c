#include "main.h"

/**
 * create_file - func to creat a file
 * @filename: filename.
 * @text_content: content to write.
 *
 * Return: 1 success or -1 if fais
 */

int create_file(const char *filename, char *text_content)
{
	int o, w;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (o == -1)
		return (-1);

	if (text_content == NULL)

		text_content = "";

	if (text_content != NULL)
	{
		int i = 0;

		while (text_content[i] != '\0')
	
	}		i++;

	w = write(o, text_content, i);

	if (w == -1)
		return (-1);

	close(o);

	return (1);
}
