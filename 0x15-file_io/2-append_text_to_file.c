#include "main.h"
/**
 *_strlen - entry point
 * @str: string whose lenth we are after
 *
 * Return: lenght of the string or -1 in case str is NULL
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
 * append_text_to_file - Entry Point
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t b_written = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);
	if (text_content)
		b_written = write(file, text_content, _strlen(text_content));
	close(file);
	if (b_written < 0)
		return (-1);
	return (1);
}
