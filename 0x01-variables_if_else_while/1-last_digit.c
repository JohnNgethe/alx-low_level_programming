#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign a random num
 * Description: 'Assign a random number to the variable'
 * Return: always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int dig;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
dig = n % 10;
if (dig > 5)
printf("Last digit of %i is is %i and is greater than 5\n", n, dig);
else if (dig == 0)
printf("Last digit of %i is is %i and is 0\n", n, dig);
else if (last < 6)
printf("Last digit of %i is is %i and is less than 6 and not 0\n", n, dig);
return (0);
}
