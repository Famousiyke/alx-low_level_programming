#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: File to be read
 * @letters: Character letters
 * Return: the actual number of letters it could read and print
 * 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *txt;
	ssize_t op;
	ssize_t rt;
	ssize_t t;

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	txt = malloc(sizeof(char) * letters);
	t = read(op, txt, letters);
	rt = write(STDOUT_FILENO, txt, t);

	free(txt);
	close(op);
	return (rt);
}
