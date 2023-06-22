#include "main.h"
/**
 *  _isalpha - checks for alphabetic character
 *  @c: the character to be checked in ASCII table
 *  Return: Always 1 for letters, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}	
	else
	{
		return (0);
	}
	_putchar ('\n');
}
