#include "main.h"

/**
 * _strlen - returns the length of a strings
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\n')
	{
		len++;
		s++;
	}

	return (len);
}
