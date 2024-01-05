// Display this AP-100 97 94  .......upto all term are positive?
#include<stdio.h>
int main()
{
    int n,i;    //n=kitni baar loop chalega
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=100;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        a = a-3;
        
    }
    return 0;

}
/*a=100,d=-3,nth term = 100+(n-1)*(-3)
                      = 100-3n+3
                      = 103-3n
we need till positive value so 103-3n>0
=> 3n<103
=> n<103/3
=> n=34.33
so n value should be maximum 34 after thar we get negative value.
*/