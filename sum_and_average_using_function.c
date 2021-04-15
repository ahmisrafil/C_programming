#include <stdio.h>
int sum(A,B,C)
{
    int result;
    result=A+B+C;
    return result;
}
float average(add)
{
   float avg;
   avg=add/3;
   return avg;
}
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
    SUM=sum(A,B,C);
    AVERAGE=average(SUM);
    printf("The sum of the number is:%d\n",SUM);
    printf("The average of the number is:%.2f",AVERAGE);


    return 0;
}
