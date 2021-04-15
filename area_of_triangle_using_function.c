#include<stdio.h>
#include<math.h>
int right_triangle(float B,float H)
{
    float area;
    area=(1/2)*B*H;
    return area;
}
int equilateral(float A)
{
    float area;
    area=(((sqrt(3))/4)*A*A);
    return area;
}
int three_side_triangle(float A,float B,float C)
{
    float S,area;
    S=((A+B+C)/2);
    area=sqrt(S*(S-A)*(S-B)*(S-C));
    return area;
}
int main()
{
    float V,H,L,A,B,C,right_area,equilateral_area,side_area;
    printf("Enter the base:");
    scanf("%f",&V);
    printf("Enter the height:");
    scanf("%f",&H);
    printf("Enter the length:");
    scanf("%f",&L);
    printf("Enter the first side:");
    scanf("%f",&A);
    printf("Enter the second side:");
    scanf("%f",&B);
    printf("Enter the third side:");
    scanf("%f",&C);
    right_area=right_triangle(V,H); //Right teiangle area calculation
    equilateral_area=equilateral(L); //Equilateral triangle area calculation
    side_area=three_side_triangle(A,B,C); // Three side triangle area calculation
    printf("The right area is:%f\n",right_area);
    printf("The equilateral area is:%f\n",equilateral_area);
    printf("The three side triangle area is:%f",side_area);
    return 0;


}
