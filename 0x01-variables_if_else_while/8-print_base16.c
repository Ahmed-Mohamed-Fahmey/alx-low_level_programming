#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int cnt = 0;

	while (cnt <= 15)
	{
		if (cnt <= 9)
		{
			putchar(cnt + '0');
			cnt++;
		}
		else
		{
			putchar(cnt - 10 + 'a');
			cnt++;
		}
	}

	putchar(10);
	return (0);
}
