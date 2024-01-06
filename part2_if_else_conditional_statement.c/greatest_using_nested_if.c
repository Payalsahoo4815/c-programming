#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number ");
    scanf("%d %d %d",&a ,&b,&c);
    if( a>b)
    {
        if(a>c)
            printf(" %d is gratest ",a);
        else
            printf("%d is greatest",c);

    }
    else
    {
        if(b>c)
            printf(" %d is gratest ",b);
        else
            printf("%d is greatest",c);
    }
    

    return 0;
}