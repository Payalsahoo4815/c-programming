#include <stdio.h>
int main()
{
    int r, s, a;
    printf("Enter the age of ram");
    scanf("%d", &r);
    printf("Enter the age of shyam");
    scanf("%d", &s);
    printf("Enter the age of arjun");
    scanf("%d", &a);
    if (r < s && r < a)
    {
        printf("Ram is youngest among three");
    }
    if (s < a && s < r)
    {
        printf("Shyam is youngest among three");
    }
    if (a < s && a < r)
    {
        printf("Arjun is youngest among three");
    }

    return 0; 
}