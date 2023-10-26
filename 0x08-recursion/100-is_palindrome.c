#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}


/**
 * func - function that compares characters recursively to see if
 * they are palindrome
 * @start: number
 * @end: number
 * @str: string
 * Return: returns 1 if 'str' is palindrome, otherwise 0
 */

int func(int start, int end, char *str)
{
	if (str[start] == str[end] && start < end)
	{
		return (func(start + 1, end - 1, str));
	}
	else if (str[start] != str[end] && start < end)
		return (0);
	else
		return (1);
}

/**
 * is_palindrome - function that returns value that
 * returned from 'func'
 * @s: pointer to string
 * Return: returns the value that was returned from 'func'
 */

int is_palindrome(char *s)
{
	int start = 0, end = _strlen_recursion(s) - 1;

	return (func(start, end, s));
}
