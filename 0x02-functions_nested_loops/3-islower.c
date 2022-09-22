#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _islower -> checkd for lowercase characters
 * @c: character argument
 * Return: return 1 for lowercase ch and return 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
