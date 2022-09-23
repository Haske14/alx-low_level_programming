#include "main.h"
/**
 * _isalpha -> function that checks for alphabet character
 * @c: character argument
 * Return: return 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
