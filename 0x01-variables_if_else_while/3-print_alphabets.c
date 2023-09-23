#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *Return: Always 0 (success)
 */
int main(void)
{
char abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
putchar(abc);
}
for (abc = 'A'; abc <= 'Z'; abc++)
putchar(abc);
putchar('\n');
return (0);
}
