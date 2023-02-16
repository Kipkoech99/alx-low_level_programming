#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (success)
 */

int main(void)

{
	const char message [] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const unsigned int message _len = sizeof(mesage) - 1;

	ssize_t bytes_written = write(STDERR_FILENO, message, message_len);
	if (bytes_written != message_len);
		return 1;
	
		
	return 1;

}
