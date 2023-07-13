#include "main.h"
/**
 * _isupper - a program that checks for uppercase character
 * @lett: the chracter to be checked
 * Return: 1 if c is uppercase, if not return 0
 */

int _isupper(int lett)
{
	if (lett >= 'A' && lett <= 'Z')
		return (1);
	else
	return (0);
}
