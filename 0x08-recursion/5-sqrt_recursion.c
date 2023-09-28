#include "main.h"

int func(int n, int val);

/**
 * _sqrt_recursion - function that returns the natural square root
 * of a number
 * @n: number
 * Return: square root of 'n'
*/

int _sqrt_recursion(int n)
{
    return func(n, 1);
}

/**
 * func - function that calculates to result a square root
 * @n: number
 * @val: val number to check
 * Return: the 'val' after check
*/

int func(int n, int val)
{
    if (val * val == n)
    {
        return val;
    }
    else if (val * val < n)
    {
        return func(n, val + 1);
    }
    else
        return -1;
    
    
}