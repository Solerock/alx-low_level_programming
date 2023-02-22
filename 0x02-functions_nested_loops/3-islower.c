#include "main.h"

/**
 * _islower - function to print the alphabet.
 * @c : parameter to be printed on the screen
 *
 * Return: 1 if it's a lower case
 * and 0 otherwise
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)

		return (1);

	else

		return (0);

}
