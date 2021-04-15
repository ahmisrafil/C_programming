#include<stdio.h>
int MULTI(A,B,C)
{
    int result;
    result=A*B*C;
    return result;
}
int SUB(A,B)
{
    int result;
    result=A-B;
    return result;
}
int main()
{
    int a,b,c,mresult,sub;

    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    mresult=MULTI(a,b,c);
    sub=SUB(a,b);
    printf("Enter the m/s key:\n");

    if('char m')
    {

        printf("The multiplication value is:%d\n",mresult);
    }
    if('char s')
    {

        printf("The subtraction value is:%d",sub);
    }
}
