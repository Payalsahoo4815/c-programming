#include<stdio.h>
int main()
{
    float radius,pi=3.1415,area;
    printf("Enter the radius of the circle");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("Area of the circle is %f ",area);
    return 0;
}