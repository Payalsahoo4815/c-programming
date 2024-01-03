#include<stdio.h>
int main()
{
    float p = 90;   // physics
    float c = 91;   // chemistry
    float m = 92;   // math
    float e = 93;   // english
    float b = 94;   // biology

    float percent = ( p + c + m + e + b)/5;
    printf("Percentage of 5 subject is %f",percent);
    return 0;
}