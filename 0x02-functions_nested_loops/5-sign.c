#include "main.h"

/**
 * print_sign - function to print the alphabet.
 * @n : parameter to be printed on the screen
 *
 * Return: 1, 0
 * and 0
 **/
int print_sign(int n)
{
	if (n > 0)

	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}

	else if (n == 0)

	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}

	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);

	}

}
