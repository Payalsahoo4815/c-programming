// WAP  to print sum of all the odd digits of a given number.
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter a number");
    scanf("%d",&n);
    int sum = 0;
    while (n != 0)
    {
        r = n%10;
        if(r%2!=0)
        {
            sum = sum +r;
        }
        n = n/10;
        
        
    }
    printf("The sum of  all odd digits are %d",sum);

    return 0;
}