// WAP  to print sum of digits of a given number.
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter a number");
    scanf("%d",&n);
    int sum = 0;
    while (n != 0)
    {
        r = n%10;
        n= n/10;
        sum = sum +r;
    }
    printf("The sum of digits are %d",sum);

    return 0;
}