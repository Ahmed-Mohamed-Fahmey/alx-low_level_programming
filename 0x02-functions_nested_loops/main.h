void print_alphabet(void);

/**
 * print_alphabet- function to print alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 97;

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
