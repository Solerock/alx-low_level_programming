/**
 * _isdigit - function to print the alphabet.
 * @c : parameter to be printed on the screen
 *
 * Return: 1 if it's a number 0 - 9.
 * and 0 otherwise
 **/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
