#include "main.h"

/**
 * print_error - print a error message and exit the program
 * with a error code
 * @msg: it is the string error format
 * @file:it is the name of file error
 * @code: that error code
 */

void print_error(const char *msg, const char *file, int code)
{
	dprintf(STDERR_FILENO, "%s%s\n", msg, file);
	exit(code);
}
/**
 * copy_file - That copy file source to destination
 * @src_filename: it's a pointer to a string character of name file source
 * @dest_filename: it's a pointer to a string character
 * of name file destination
 */
void copy_file(const char *src_filename, const char *dest_filename)
{
	char buffer[1024];
	ssize_t bytes_read;
	int src, dest;

	src = open(src_filename, O_RDONLY);
	if (src == -1)
		print_error("Error: Can't read from file %s\n", src_filename, 98);

	dest = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (dest == -1)
	{
		close(src);
		print_error("Error: Can't write to %s\n", dest_filename, 99);
	}
	while ((bytes_read = read(src, buffer, sizeof(buffer))) > 0)
	{
		if (write(dest, buffer, bytes_read) != bytes_read)
		{
			close(src);
			close(dest);
			print_error("Error: Can't write to %s\n", dest_filename, 99);
		}
	}

	if (bytes_read == -1)
	{
		close(src);
		close(dest);
		print_error("Error: can't read from file %s\n", src_filename, 98);
	}

	if (close(src) == -1 || close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				(close(src) == -1 ? src : dest));
		exit(100);
	}
}
/**
  * main - check the code
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Alaways 0
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}
