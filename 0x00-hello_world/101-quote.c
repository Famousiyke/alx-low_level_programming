#include <stdio.h>
#include <unistd.h>

/**
 * main - A c program that prints a line to the standard error
 * followed by a new line
 *
 * Return: Always 1(succesful)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
