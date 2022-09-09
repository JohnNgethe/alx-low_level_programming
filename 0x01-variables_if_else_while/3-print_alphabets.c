#include <stdio.h>
/**
 * main - return alphabet
 * Description: 'alphabet in lower and uppercase
 * Return: always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter\n);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter\n);
}
return (0);
}
