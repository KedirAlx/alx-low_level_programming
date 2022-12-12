#include <stdio.h>

/**
 * main - print alphabet in lowercase reverse
 * Return: Always 0
 */
int main(void)
{
	int la;

	for (la = 'z'; la >= 'a'; la--)
		putchar(la);

	putchar('\n');
	return (0);
}
