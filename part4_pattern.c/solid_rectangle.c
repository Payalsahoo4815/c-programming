#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows");
    scanf("%d",&n);
    int m;
    printf("Enter number of coloumns");
    scanf("%d",&m);
    for (int i=1;i<=n;i++) // outer loop ---> number of rows
    {
        for (int i=1;i<=m;i++)//inner loop ----> numbers of coloumn
        {
            printf("*");
        }
        printf("\n");// har line ke baad ek enter marne ke liye
    }
    return 0;
}