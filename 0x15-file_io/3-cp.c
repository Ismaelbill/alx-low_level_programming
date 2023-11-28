#include "main.h"
#define BUFF_SIZE 1024

/**
 * main - function that copies the content of a file to another file
 * @argc: size of argv
 * @argv: array of size argc
 * Return: can return 97 or 98 or 99 or 100
 */

int main(int argc, char *argv[])
{
	int fileNum, fileNum2;
	char buffer[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileNum = open(argv[1], O_RDONLY);
	if (fileNum == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	read(fileNum, buffer, (BUFF_SIZE));
	fileNum2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileNum2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	write(fileNum2, buffer, strlen(buffer));
	fileNum = close(fileNum);
	fileNum2 = close(fileNum2);
	if (fileNum)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]), exit(100);
	if (fileNum2)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]), exit(100);
	return (0);
}
