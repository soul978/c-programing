//0000 print the given pattern 
//0000
//0000
//0000
#include<stdio.h>
int main(){
   int a;
   printf("enter the first number :");
   scanf("%d",&a);
    int b;
    printf("enter the second number :");
    scanf("%d",&b);
    for (int i = 1; i <=a; i++)
    {
        for (int i = 1; i <=b; i++)
        {
            printf("0");
        }
        printf("\n");
    }
            
    return 0;
}
