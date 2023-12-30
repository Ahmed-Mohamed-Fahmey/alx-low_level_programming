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
char c = 'a';

while (c <= 'z')
{
if (c == 'e' || c == 'q')
{
c++;
continue;
}
else
{putchar(c);
c++;
}
}

putchar(10);

return (0);
}
