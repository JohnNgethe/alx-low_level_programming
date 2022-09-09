#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign a random n
 * Description: 'Positive anything is better than negative nothing'
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive", n);
}
else
{
printf("%d is negative", n);
}
return (0);

