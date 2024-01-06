//WAP to print the sum of given number and its reverse
#include<stdio.h>
int main()
{
    int n,number,r,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    number = n;
    int reverse = 0;
    while( n > 0)
    {
        reverse = reverse*10;
        reverse = reverse+(n%10);
        n= n/10;
    }
    
    printf("Reverse of the given number is %d",reverse);
    while (n != 0)
    {
        r = n%10;
        n= n/10;
        sum = sum +r;
    }
    printf("The sum of digits are %d",sum);
   
    printf("sum of the digits of the given number is %d",sum);
    return 0;
}