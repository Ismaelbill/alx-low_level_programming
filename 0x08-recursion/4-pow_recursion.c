#include "main.h"

int numbs(int f, int s);

int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1);
    else
    return numbs(x, y);
}

int numbs(int f, int s)
{
    int i, result = 1;
    for (i = 0; i < s; i++)
    {
        result *= f;
    }
    return result;
}