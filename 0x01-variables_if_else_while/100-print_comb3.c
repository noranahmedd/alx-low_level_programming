#include <stdio.h>

/**
 * main - entry point
 * Description: A program that prints all single digit numbers of base 10
 *              starting from 0, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8 || j < 9)
                        {	
				putchar(',');
				putchar(' ');
                        }
		}
	}
	putchar('\n');
	return (0);
}
