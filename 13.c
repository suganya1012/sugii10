#include <stdio.h>
int main()
{
    int a, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<=a/2; ++i)
    {
        
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",a);
    else
        printf("%d is not a prime number.",a);
    
    return 0;
}
