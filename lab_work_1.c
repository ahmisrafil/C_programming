#include<stdio.h>
int main()
{
    int start,end,m;
    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ending number:");
    scanf("%d",&end);

    for( ;start<=end;start++)
    {
         printf("%d\n",start);
    }

    start=start+1;
    end=end-1;
    m=1;
    for( ;start<=end;start++)
    {

         m=m*start;

    }


   printf("The multiplication of number is:%d\n",m);
   printf("HAPPY CODING!");
   return 0;
}
