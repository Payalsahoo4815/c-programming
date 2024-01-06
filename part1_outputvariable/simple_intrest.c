#include<stdio.h>
int main()
{
    float p ,t,r,si;
    printf("Enter the principal amount");
    scanf("%f",&p);
    printf("Enter the intrest rate");
    scanf("%f",&r);
    printf("Enter the time period");
    scanf("%f",&t);
    si = (p*t*r)/100;
    printf("total intrest amount is %f",si);

    return 0; 
}