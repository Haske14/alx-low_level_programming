#include "main.h"

/**
 * main - prints alphabet in lowecase and new line
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	_putchar('\n');
}
