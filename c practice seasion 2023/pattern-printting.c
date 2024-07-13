#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("enter the given numbers :");scanf("%d",&a);
    // int b;
    // printf("enter the given numbers :");scanf("%d",&b);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if(i){
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}