// Display this AP-1 3 5 7 9......upto n
//a=1,d=2,nth term=a+(n-1)d 
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number for which position u want in this AP : ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;

}