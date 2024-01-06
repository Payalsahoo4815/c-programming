// Display this AP-4 7 10 13 16 .......upto n
// a=4,d=3,nth term=a+(n-1)*d
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number for which position u want in this AP : ");
    scanf("%d",&n);
    for(i=4;i<=3*n+1;i=i+3)
    {
        printf("%d\n",i);
    }
    return 0;

}