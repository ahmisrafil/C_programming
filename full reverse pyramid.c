#include<stdio.h>
int main()
{
    int c,r,s,n;     //c=number of space; r=rows; s=number of stars
    printf("ENTER THE NUMBER OF ROWS:");
    scanf("%d",&n);
    for(r=0;r<n;r++)
    {
        for(c=0;c<=r;c++)
        {
           printf(" ");
        }
        for(s=n;s>r;s--)
        {
            printf(" *");
        }
        printf("\n");

    }
    return 0;
}
