#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file wanted to append
 * @text_content: text to add
 *
 * Return: 1 Success or -1 in fail case
 * **/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);

}
