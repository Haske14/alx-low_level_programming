#include "main.h"
#include "main.h"
/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
		i++;
	}
}
