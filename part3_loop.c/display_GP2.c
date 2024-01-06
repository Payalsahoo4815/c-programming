//Display a GP:-3,12,48,.....upto n
// a=1,r(common ratio)=2,nth term=ar^n-1
#include<stdio.h>
int main()
{   int n,i;    //n=kitni baar loop chalega
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=3;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        a = a*4;    
    }
    return 0;

}