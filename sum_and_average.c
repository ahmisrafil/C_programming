#include <stdio.h>
int main()
{
    int A,B,C,SUM;
    float AVERAGE;
    printf("Enter the first number:");
    scanf("%d",&A);
    printf("\nEnter the second number:");
    scanf("%d",&B);
    printf("\nEnter the first number:");
    scanf("%d",&C);
    SUM=A+B+C;
    AVERAGE=SUM/3;
    printf("The sum of the number is:%d\n",SUM);
    printf("The average of the number is:%.2f",AVERAGE);


    return 0;


}
