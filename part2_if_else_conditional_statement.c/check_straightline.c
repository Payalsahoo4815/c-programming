#include<stdio.h>
int main()
{
    double x1,x2,x3,y1,y2,y3;
    // point a(x1,y1),b(x2,y2),c(x3,y3)
    printf("Enter the value of the points");
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&x2,&x3,&y1,&y2,&y3);
    double m1,m2;
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if(m1==m2) 
        printf("Three points are laying on straight line");
    else
        printf("Don't  laying on straight line");

    return 0;
}