//Display a GP:-1,2,4,8,16,32.....upto n
// a=1,r(common ratio)=2,nth term=ar^n-1
#include<stdio.h>
int main()
{   int n,i;    //n=kitni baar loop chalega
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        a = a*2;    
    }
    return 0;

}