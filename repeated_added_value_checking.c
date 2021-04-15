#include<stdio.h>
int main()
{
   int count,answer;
   for(count=1;count<=3;count++)
   {
       printf("%d+%d=",count,count);
       scanf("%d",&answer);
       if(answer==count+count)
       {
           printf("The answer is right");
       }
       else{printf("The answer is wrong\n");
       printf("The right answer is:%d",count+count);
   }

   return 0;
   }
}
