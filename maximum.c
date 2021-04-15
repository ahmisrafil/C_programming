#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two integer number:");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    printf("%d is maximun",num1);
    else
    printf("%d is minimum",num2);
    return 0;

}
