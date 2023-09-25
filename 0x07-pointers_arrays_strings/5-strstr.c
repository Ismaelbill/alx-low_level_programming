#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    char *i;
    for (; *haystack != '\0'; haystack++)
    {
        for (i = needle; *i != '\0'; i++)
        {
            if (*haystack != *i)
                break;
            haystack++;

            
        }
            if ('\0' == *haystack)
            {
                return (haystack - (i - needle));
            }
        
    }
    return ('\0');
}
