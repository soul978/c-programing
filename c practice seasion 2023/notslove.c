#include<stdio.h>
#include<conio.h>
int main(){

    int a,b=65;
    printf("enter the first numbers :");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
       for (int j = a; j >=i; j--)
       {
         printf(" ");
       }
       for (int k = 1; k <=i; k++)
       {
        printf("%c",b);
       }
      b= b+1;
       printf("\n");
    }
    return 0;
}