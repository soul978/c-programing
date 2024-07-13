#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("enter the variables:");scanf("%d",&a);
    int b;
    printf("enter the variables :");scanf("%d",&b);
    int c[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("(%d %d)enter the elements of given arrays :",i,j);
            scanf("%d",&c[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%2d",c[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if(i+j>0){
                printf(" %d",c[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
