#include "main.h"

/**
 * print_error - print a error message and exit the program
 * with a error code
 * @src: it's source file
 * @dest:it's destination file
 * @argv: argument vector
 */

void print_error(int src, int dest, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
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
	char buffer[1024];
	int src, dest;
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	src = open(argv[1], O_RDONLY);

	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);

	bytes_read = 1024;
	while (bytes_read == 1024)
	{
		bytes_read = read(src, buffer, 1024);
		if (bytes_read == -1)
			print_error(-1, 0, argv);
		bytes_written = write(dest, buffer, bytes_read);
		if (bytes_written == -1)
			print_error(0, -1, argv);
	}

	if (close(src) == -1 || close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				(close(src) == -1 ? src : dest));
		exit(100);
	}
	return (0);
}
