#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints its name
 * followed by a new line.
 * @argc: Argument count
 * @argv: array of pointers to arguement strings
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
