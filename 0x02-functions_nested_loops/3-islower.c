#include <main.h>

/**
 * _islower - checksif the character is lowercase
 * @c: the character
 *
 * Return: 1 if lette is lowerr,0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
