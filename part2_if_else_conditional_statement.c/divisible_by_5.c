#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if( x % 5 == 0 )
    {
        printf("given no. is divisible by 5");
    }
    else
    {
        printf("given no. is not divisible by 5");
    }
    return 0;
}