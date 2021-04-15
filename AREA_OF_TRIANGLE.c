#include <stdio.h>
#include <math.h>
float triangle_area(float v,float h)
{
    float area;
    area=(1/2)*v*h;
    return area;
}
int main()
{
    float v,h,area;
    printf("Enter the ground:\nEnter the height:");
    scanf("%f%f",&v,&h);
    area=triangle_area(v,h);
    printf("The area of the triangle:%f",area);
    return 0;
}
