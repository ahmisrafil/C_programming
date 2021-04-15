#include <stdio.h>
int main()
{
    int A[5],i,sum;
    A[0]=10;
    A[1]=15;
    A[2]=20;
    A[3]=25;
    A[4]=30;
    sum=0;
    for(i=0;i<=4;i++)
    {
        printf("%d\n",A[i]);
        sum=sum+A[i];
    }
     printf("The sum of the numbers is:%d",sum);
    return 0;
}
