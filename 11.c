#include <stdio.h>
int main()
{
    int a, exponent;

    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &a);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result *= a;
        --exponent;
    }

    printf("Answer = %lld", result);

    return 0;
}
