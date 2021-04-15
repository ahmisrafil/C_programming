#include<stdio.h>
int main()
{
    int start,end,multi;
    printf("Enter the starting number");
    scanf("%d",&start);
    printf("Enter the ending number");
    scanf("%d",&end);


    for( ;start%2||0;start+=2)
    {

        printf("%d\n",start);
    }
    return 0;

}
