#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_num;
	ssize_t content;

	if (filename == NULL)
	{
		return (0);
	}

	FILE *txtfile = fopen(filename, "r");
	if (txtfile == NULL)
	{
		return (0);
	}

	char *mem = (char *) malloc(letters + 1);
	if (mem == NULL)
	{
		return (0);
	}
	ssize_t bytes_num = 0;

	ssize_t bytes_num = fread(mem, sizeof(char), letters, txtfile);
	if (bytes == -1)
	{
		fclose(txtfile);
		free(mem);
		return (0);
	}
	mem[bytes_num] = '\0'
	
	ssize_t content = 0;

	ssize_t content = fwrite(mem, sizeof(char), letters, stdout);
	if (content == -1 || content != bytes_num)
	{
		fclose(txtfile);
		free(mem);
		return (0);
	}
	fclose(txtfile);
	free(mem);

	return (bytes_num);
}
