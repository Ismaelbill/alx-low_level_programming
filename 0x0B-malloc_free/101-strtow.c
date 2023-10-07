#include "main.h"

char **strtow(char *str)
{
    int i;
    char **newStr;
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
        {
            newStr[i] = str[i];
        }
        
    }
    return newStr;
}