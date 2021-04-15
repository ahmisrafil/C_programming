#include<stdio.h>
int main()
{
    int c,n,r,s;   //c=collum r=row s=star n=user input
    printf("Enter your desired row number:");
    scanf("%d",&n);
    for(r=0;r<=n;r++)
    {
        for(c=n;c>r;c--)
        {
           printf("*");
        }
        printf("\n");
    }
    return 0;
}
