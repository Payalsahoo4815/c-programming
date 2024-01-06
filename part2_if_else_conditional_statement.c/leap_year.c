#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year to check it is leap year or not");
    scanf("%d",&year);
    if( year % 4 == 0)
    {
        printf("yes,it is a leap year");
    }
    else
    {
        printf("this year is not a leap year");
    }

    return 0;
}