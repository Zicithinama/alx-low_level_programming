#include <stdio.h>

/**
 * main - print alpabets in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
