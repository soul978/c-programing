#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("enter the first numbers :");
    scanf("%d",&a);
    int b;
    printf("enter the second nubers :");
    scanf("%d",&b);
    for (int  i = 1; i <=a; i++)
    {
        for (int  j = 1; j <=a; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=a; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}