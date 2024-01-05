// 2 ki power n tak print karo.
#include<stdio.h>
int main()
{
    int a=2,b;
    printf("Enter the power");
    scanf("%d",&b);
    int power = 1;
    for(int i=1;i<=b;i++)
    {
        power = power*a;
        printf("2 raised to the power %d is %d\n",i,power);
    }
    
    return 0;

}