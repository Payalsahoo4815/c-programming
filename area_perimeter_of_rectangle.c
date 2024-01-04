#include<stdio.h>
int main()
{
    float length,breadth,area,perimeter;
    printf("Enter the length of the rectangle");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle");
    scanf("%f",&breadth);
    area = length * breadth ;
    perimeter = 2 * (length+breadth);
    printf("area of the rectangle is %f\n",area);
    printf("perimeter of the rectangle is %f\n ",perimeter);
    if (area >perimeter)
    {
        printf("Area is greater then perimeter");
    }
    else 
    {
        printf("Area is not greater then perimeter");
    }

    return 0;

}
