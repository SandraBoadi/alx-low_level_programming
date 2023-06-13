#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num;
	int file_descriptor;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	num = read(file_descriptor, buffer, letters);
	if (num != (ssize_t)strlen(buffer))
		return (0);

	buffer[num] = '\0';
	write(STDOUT_FILENO, buffer, num);
	close(file_descriptor);

	return (num);
}
