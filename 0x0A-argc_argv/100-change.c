#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that 
 * @argc: the size of 'argv' array
 * @argv: an array of size 'argc'
 * Return: 
 */

int main(int argc, char *argv[])
{
    int arr[5] = {25, 10, 5, 2, 1}, i, j, sum = 0, target = (atoi(argv[argc - 1])), res = 0;

    if (argc > 2)
        return (1);

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            printf("%d\n", sum + 1);
            return (0);
        }
    }

    for (i = 0; i < 5; i++)
    {
        sum = 0;
        res = 0;
        for (j = 0; j <= target; j++)
        {
            if (res == target)
            {
                printf("baraka 3lk %i\n", sum);
                return (0);
            }
            res += arr[i];
            sum++;
        }
    }



    return (0);
}