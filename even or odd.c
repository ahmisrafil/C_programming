#include<stdio.h>
//This program is to find a number is either even or odd.
int main()
{
  int a,i;
  for(i=0;i<10;i++)
{
    printf("ENTER ANY NUMBER:");
    scanf("%d",&a);
    if(a%2==0)
    printf("The number is-EVEN\n");
    else printf("The number is-ODD\n");

}

return 0;
}
