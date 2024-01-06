#include<stdio.h>
int main()
{
    int i=1;

    while(i<=10);//due to this semicoloumn it can't go further.
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}