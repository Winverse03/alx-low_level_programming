#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txtf;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);
	txtf = open(filename, O_RDONLY);
	if (txtf == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(txtf, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);
	close(txtf);
	free(buf);
	return (nwr);
}
