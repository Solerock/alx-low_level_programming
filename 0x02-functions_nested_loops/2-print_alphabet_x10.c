#include "main.h"

/**
 * print_alphabet_x10 - a function that prints alphabets
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char p;

	for (i = 1 ; i <= 10 ; i++)

	{
		for (p = 'a' ; p <= 'z' ; p++)

			_putchar(p);
		_putchar('\n');
	}
}
