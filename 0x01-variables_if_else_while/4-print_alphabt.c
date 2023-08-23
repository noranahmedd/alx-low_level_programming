#include <stdio.h>
/**
 * main - entry point
 * description:Print all the letters except q and e
 * Return: always 0 (success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && != 'e')
			putchar(l);
	}

	putchar('\n');
	return (0);
}

