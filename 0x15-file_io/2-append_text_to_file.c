#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text
 * Return: return 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileNum;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fileNum = open(filename, O_WRONLY | O_APPEND, 0664);
	if (fileNum == -1)
		return (-1);

	write(fileNum, text_content, strlen(text_content));
	close(fileNum);
	return (1);
}
