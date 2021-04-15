#include<stdio.h>
int main()
{
    int choice;
    float far,cel;
    printf("Enter your choice(1 for cel-far/2 for far-cel):");
    scanf("%d",&choice);
    if(choice==1)
    {
       printf("Enter the temperature in celcius:");
       scanf("%f",&cel);
       far=((9*cel)/5)+32;
       printf("The tempertature in farenheight:%.2f",far);
    }
    else if(choice==2)
    {
         printf("Enter the temperature in farenheight:");
       scanf("%f",&far);
       cel=((far-32)*5)/9;
       printf("The tempertature in celcius:%.2f",cel);
    }
    else
    {
        printf("You entered wrong choice");
    }
    return 0;

}
