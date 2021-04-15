#include <stdio.h>
int main()
{
    int TABLE[4][5];
    TABLE[0][0]=10;
    TABLE[1][0]=22;
    TABLE[2][0]=23;
    TABLE[3][0]=35;
    TABLE[0][1]=26;
    TABLE[1][1]=18;
    TABLE[2][1]=30.12;
    TABLE[3][1]=10.2;
    TABLE[0][2]=29;
    TABLE[1][2]=21;
    TABLE[2][2]=20;
    TABLE[3][2]=30;
    TABLE[0][3]=28;
    TABLE[1][3]=29;
    TABLE[2][3]=30;
    TABLE[3][3]=22;
    TABLE[0][4]=27;
    TABLE[3][4]=24;
    printf("Enter two integer value:");
    scanf("%d%d",&TABLE[1][4],&TABLE[2][4]);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",TABLE[0][0],TABLE[1][0],TABLE[2][0],TABLE[3][0],TABLE[0][1],TABLE[1][1],TABLE[2][1],TABLE[3][1],TABLE[0][2],TABLE[1][2],TABLE[2][2],TABLE[3][2],TABLE[0][3],TABLE[1][3],TABLE[2][3],TABLE[3][3],TABLE[0][4],TABLE[1][4],TABLE[2][4],TABLE[3][4]);

    return 0;
}




