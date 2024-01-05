#include<stdio.h>
int main()
{
    for(int i =65;i<=90;i++)
    {
        char ch = (char)i;
        printf("%c ->",ch);
        printf("%d\n",i);
    }
    for(int i =97;i<=123;i++)
    {
        char ch = (char)i;
        printf("%c ->",ch);
        printf("%d\n",i);
    }

    return 0;
}