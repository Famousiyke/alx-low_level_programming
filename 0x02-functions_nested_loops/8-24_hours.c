#include "main.h"
/**
 * jack_bauer - prints every minute of day of Jack bauer
 * starting from 00:00 to 23:59
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hour, minute;

	for (a = 0; houa <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
