#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three number");
    scanf("%d %d %d", &a, &b, &c); // all three are distinct.
    if (a > b && a > c)
    {
        printf("%d is the greatest no.",a);
    }
    if (b > a && b > c)
    {
        printf("%d is the greatest no.",b);
    }
    if (c > b && c > a)
    {
        printf("%d is the greatest no.",c);
    }

    return 0;
}