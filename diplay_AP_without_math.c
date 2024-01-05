// Display this AP-4 7 10 13 16 .......upto n
#include<stdio.h>
int main()
{
    int n,i;    //n=kitni baar loop chalega
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=4;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        a = a+3;
        
    }
    return 0;

}