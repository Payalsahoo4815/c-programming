#include<stdio.h>
int main()
{
    float a;
    printf("Enter a fractional number");
    scanf("%f",&a);
    int b = a;
    printf("fractional part of a number is %f",a-b);

    return 0;
}
