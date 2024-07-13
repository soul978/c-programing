#include<stdio.h>
#include<conio.h>
int main(){

    int a;
    printf("enter the first numbers :");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
        for (int j = a; j >=i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k < i+1; k++)
        {
            printf(" *");
        }
       printf("\n"); 
    }
    return 0;
}