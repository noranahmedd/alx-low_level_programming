/**
 * _puts - prints a string followed by a newline to std;
 *
 * @str: String to print.
 *
 * Return: nothing.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
