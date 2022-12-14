#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 0 when succed and 1 if it's lowercase
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

// task 4


#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 0 when succed and 1 if it's letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
