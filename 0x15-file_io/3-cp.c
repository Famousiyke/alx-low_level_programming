#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - a program that copies the content
* of a file to another file
* @argc: number of arguments
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
int fl_frm, fl_to;
int nm1 = 1024, nm2 = 0;
char buf[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp fl_frm fl_to\n"), exit(97);
fl_frm = open(argv[1], O_RDONLY);
if (fl_frm == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read frm fl %s\n", argv[1]);
	exit(98);
}
fl_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (fl_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(fl_frm), exit(99);
}
while (nm1 == 1024)
{
	nm1 = read(fl_frm, buf, 1024);
	if (nm1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read frm fl %s\n", argv[1]);
		exit(98);
	}
	nm2 = write(fl_to, buf, nm1);
	if (nm2 < nm1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(fl_frm) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_frm), exit(100);

if (close(fl_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl_to), exit(100);

return (0);
}
