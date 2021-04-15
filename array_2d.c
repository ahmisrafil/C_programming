#include<stdio.h>
int main(){

   int ID[3][3];

ID[0][0]=5230;
ID[1][0]=5231;
ID[2][0]=5235;
ID[1][0]=5234;
ID[1][1]=5236;
ID[2][1]=5237;
ID[0][2]=5238;
printf("Enter two integer value:");
scanf("%d%d",&ID[1][2],&ID[2][2]);
printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",ID[0][0],ID[1][0],ID[2][0],ID[1][0],ID[1][1],ID[2][1],ID[0][2],ID[1][2],ID[2][2]);


return 0;
}
