#include <stdio.h>
/**
 *main-entry point
 *description:prints alphabet in lower using putchar()
 *Return: always 0 (success)
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
