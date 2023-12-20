#include "main.h"

/**
 * read_textfile - Read a text file and prints it to the stdout
 * @filename: Name of the file
 * @letters: Number of letters to read from the file
 * Return: The Number of bytes read and write on success, 0 if fails
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;

	char *buff = malloc(sizeof(char) * letters)

	if (!filename)
		return (0);


	if (buff == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);

	return (w);

}
