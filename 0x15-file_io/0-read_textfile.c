#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters: number of characters
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (-1);
	}
	FILE *fp;

	fp = fopen("filename", O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	bytes_read = fread(buffer, letters, fp);
	if (bytes_read == -1)
	{
		return (0);
	}
	bytes_written = fwrite(bytes_read, buffer, STDOUT_FILENO);
	if (bytes_written == -1)
	{
		return (0);
	}
	free(buffer);
	fclose(fp);
	return (bytes_written);
}
