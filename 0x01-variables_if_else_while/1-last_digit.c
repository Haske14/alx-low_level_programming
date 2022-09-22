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
	int n;
	int L;
	char str[] = "Last digit of";
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;
	if (L > 5)
		printf("%d is %d and is greater than 5\n", n, L);
	else if (L == 0)
		printf("%d is %d and is 0\n", n, L);
	else if (L < 6)
		printf("%d is %d and is less than 6 and not 0\n", n, L);
	return (0);
}
