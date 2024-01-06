//print all even numbers from 1 to 100 using continue
#include<stdio.h>
int main()
{
    int i;
    for (i=1;i<=100;i++)
    {
        if(i%2 != 0)
        {
            continue;//slip karo loop ki round ko
        }
        printf("%d\n",i);
    }

    return 0;

}