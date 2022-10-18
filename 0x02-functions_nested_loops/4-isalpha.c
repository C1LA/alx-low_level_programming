#include "main.h"
/**
 * _isalpha - checks char alphabet
 * @c: char being checked
 *
 * Return: 1 if char is lower or upper, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
