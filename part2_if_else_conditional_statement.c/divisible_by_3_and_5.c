#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    if( n % 5 == 0 && n % 3 == 0)
    {
        printf("it is divisible by 3 and 5 both");
    }
    else
    {
        printf("it is not divisible by both 5 and 3");
    }

    return 0;
}