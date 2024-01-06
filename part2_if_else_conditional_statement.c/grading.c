#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks"); // total marks = 100
    scanf("%d",&marks);
    if(90<marks)
        printf("excellent");
    else if(80<marks)
        printf("very good");
    else if(70<marks)
        printf("good");
    else if (60<marks)
        printf("can do better ");
    else if(50<marks)
        printf("average");
    else if(40<marks)
        printf("below average");
    else
        printf("Fail");

    return 0;
}