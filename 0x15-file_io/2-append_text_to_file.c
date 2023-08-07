#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file -  a function that appends text
 * at the end of a file.
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int rq = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[rq] != '\0')
	{
		rq++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, rq);

	return (1);
}
