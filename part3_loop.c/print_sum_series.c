// print the sum of series : 1-2+3-4+5-6.....upto n.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of terms u need to do the series");
    scanf("%d",&n);
    int sum =0;
    for(int i;i<=n;i++)
    {
        if(i%2!=0) 
            sum=sum+i;
        else
            sum=sum-i;

    }
    printf("The sum is: %d",sum);
    return 0;

}