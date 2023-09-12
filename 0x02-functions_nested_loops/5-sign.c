#include "main.h"

/**
 * _isalpha - function to check if
 *	      input is alphabet
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet
 *	   otherwise always 0 (Success)
 */

int print_sign(int n)
{
    if (n < 0)
    {
        _putchar('-');
        return (-1);
    } else if (n == 0)
    {
        _putchar('0');
        return (0);
    }else {
        _putchar('+');
        return (1);
    }
}