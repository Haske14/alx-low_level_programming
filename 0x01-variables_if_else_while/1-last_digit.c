#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - determines either greater than 5, is less than 6, or it is 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, l;
	srand(time(0));
	n rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than6 and not 0\n", n, l);
	}
	return (0);
}
