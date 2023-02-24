/**
 * _isupper - function to print the alphabet.
 * @c : parameter to be printed on the screen
 *
 * Return: 1 if it's a lowercase
 * and 0 otherwise
 **/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
