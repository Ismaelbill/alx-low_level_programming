#include "main.h"

#define BUFF_SIZE 1024

/**
 * read_textfile - function that reads a test file and prints
 * it to the POSIX STDOUT
 * @filename: name of file
 * @letters: number os letters
 * Return: returns the actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileNum;
	char buffer[BUFF_SIZE * 8];
	ssize_t tmp;

	if (!filename || !letters)
		return (0);

	fileNum = open(filename, O_RDONLY);

	if (fileNum == -1)
		return (0);

	tmp = read(fileNum, buffer, letters);
	write(STDOUT_FILENO, buffer, tmp);
	close(fileNum);
	return (tmp);
}
