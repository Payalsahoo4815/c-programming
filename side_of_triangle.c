#include<stdio.h>
int main()
{
    int a ,b,c ;
    printf("Enter the three sides to check is it a traingle or not ");
    scanf("%d %d %d",&a,&b,&c);
    if( a+b>c && b+c>a && a+c>b)
    {
        printf("yes,this is a traingle");
    }
    else
    {
        printf("no,it is not a traingle");
    }

    return 0;
}