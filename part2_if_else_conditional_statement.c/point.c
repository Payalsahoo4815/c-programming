// Given a point(x,y),write a program to find out if it is lies on the 
// x-axis,y-axis or at the origin ,viz(0,0)

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the co-ordinates");
    scanf("%d %d",&x,&y);
    if ( x==0 && y==0 )
        printf("lies on origin"); 
        
    else if ( x==0 )
        printf("The point is lies on y-axis");
    else if (y==0)
        printf("Lies on x-axis");
    else
        printf("point doesn't lies on x-axis and y-axis");

    return 0;


}