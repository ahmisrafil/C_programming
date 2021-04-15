#include<stdio.h>
int main()
{
    int choice;
    float feet,meter;
    printf("Enter your choice(1/2):");
    scanf("%d,&choice");
    if(choice==1)
    {
        printf("Enter the value in meter scale:");
        scanf("%d",&meter);
        feet=meter/3.28;
        printf("The value in feet scale is:%f",feet);
    }
    if(choice==2)
    {
        printf("Enter the value in feet scale:");

        scanf("%d",&feet);
        meter=feet*3.28;
        printf("The value in meter scale is:%f",feet);
    }
    return 0;
}
