#include "main.h"
#define BUFF_SIZE 1024
#define ERR_FILE "Usage: cp file_from file_to\n"
#define ERR_FILE_FROM_TO "Error: Can't read from file %s\n"
#define NO_CLOSE "Error: Can't close fd %i\n"
#define NO_WRITE "Error: Can't write to %s\n"
/**
 * main - function that copies the content of a file to another file
 * @argc: size of argv
 * @argv: array of size argc
 * Return: return 0 in success
 */

int main(int argc, char *argv[])
{
	int fileNum, fileNum2;
	char buffer[BUFF_SIZE];
	ssize_t b;

	if (argc != 3)
		dprintf(STDERR_FILENO, ERR_FILE), exit(97);

	fileNum = open(argv[1], O_RDONLY);
	if (fileNum == -1)
		dprintf(STDERR_FILENO, ERR_FILE_FROM_TO, argv[1]), exit(98);
	fileNum2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fileNum2 == -1)
		dprintf(STDERR_FILENO, NO_WRITE, argv[2]), exit(99);

	while ((b = read(fileNum, buffer, BUFF_SIZE)) > 0)
		if (write(fileNum2, buffer, b) != b)
			dprintf(STDERR_FILENO, NO_WRITE, argv[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_FILE_FROM_TO, argv[1]), exit(98);

	fileNum = close(fileNum);
	fileNum2 = close(fileNum2);

	if (fileNum)
		dprintf(STDERR_FILENO, NO_CLOSE, fileNum), exit(100);
	if (fileNum2)
		dprintf(STDERR_FILENO, NO_CLOSE, fileNum2), exit(100);
	return (0);
}
