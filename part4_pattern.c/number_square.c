#include<Stdio.h>
int main()
{
    int n;
    printf("Enter number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)//no. of rows --> i
    {
        for(int j= 1;j<=n;j++)// no. of columns --> j
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
} 