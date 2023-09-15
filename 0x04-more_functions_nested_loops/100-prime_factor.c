/*#include <stdio.h>

int main(void)
{
    int num = 1231952, i, primenum;
    for (i = 0; i <= 7; i++)
    {
        if (num / 2)
        {
            if (num % 2 == 0)
            {
                printf("suiii");
                primenum += 2;
            }
            
        }
        else
            break;
    }
    printf("%d\n", num);
    printf("%d\n", primenum);
    return (0);
}*/

#include <stdio.h>

void print_prime_factors(int num) {
    printf("Prime factors of %d:\n", num);

    // Divide the number by 2 until it's odd
    while (num % 2 == 0) {
        printf("2\n");
        num /= 2;
    }

    // Check for prime factors starting from 3
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d\n", i);
            num /= i;
        }
    }

    // If num is still greater than 1, it's a prime factor itself
    if (num > 1) {
        printf("%d\n", num);
    }
}

int main() {
    int number = 1231952;
    print_prime_factors(number);
    return 0;
}