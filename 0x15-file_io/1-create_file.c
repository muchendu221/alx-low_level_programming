#include "main.h"

/**
 * _strlen - compute the length of NULL-terminated string
 * @str: The string to get length
 * Return: Length of the string or -1 is string is NULL
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);
	while (*str++)
		++len;
	return (len);
}
/**
 * create_file - Entry Point
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t b_written;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file < 0)
		return (-1);

	if (text_content)
		b_written = write(file, text_content, _strlen(text_content));
	close(file);

	if (b_written < 0)
		return (-1);
	return (1);
}
