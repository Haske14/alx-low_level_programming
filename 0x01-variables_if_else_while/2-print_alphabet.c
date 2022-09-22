#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Alwys 0 (Succcess)
 */
int main(void)
{
	char low;

		for (low = 'a'; low <= 'z'; low++)
			putchar(low);
		printf("\n");
		return (0);
}
