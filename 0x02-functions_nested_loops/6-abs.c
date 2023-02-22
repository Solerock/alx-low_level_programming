#include "main.h"

/**
 * _abs - function to print absolute value.
 * @a : parameter to be printed on the screen
 *
 * Return: a always
 **/
int _abs(int a)
{
	if (a < 0)
		a = -(a);

	else if (a >= 0)
		a = a;

	return (a);
}
