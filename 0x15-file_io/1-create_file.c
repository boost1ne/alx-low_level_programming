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
	int o, w, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);

}
