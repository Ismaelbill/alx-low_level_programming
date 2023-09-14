#include "main.h"

void print_times_table(int n)
{
    int i, j, result;
    for (i = 0; i <= n; i++)
    {
        
        
        for (j = 0; j <= n; j++)
        {
            result = j * i;
            
            if(j == n)
                break;
            if(result < 9)
                printf(" %d,   ", result);
            else if (result >= 10 && result <= 99)
            {
                printf("%d,   ", result);
            }


        }
        printf("\n");
    }
}