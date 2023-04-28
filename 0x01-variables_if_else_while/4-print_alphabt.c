#include <stdio.h>
/**
 * main - print alphabets in lowercase except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar (la);
	}

	putchar('\n');

	return (0);
}
