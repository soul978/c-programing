#include<stdio.h>
#include<conio.h>
int main(){
   int a;
    printf("enter the first numbers :");scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j = a; j>=i; j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf(" *");
            //  a=1;
            //  a+2;
        }
        for (int l = a; l >=i; l--)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}