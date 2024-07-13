//? find the sum of the given matrix of the n *m;
#include<stdio.h>
int main(){
    int r,c,sum = 0;
    printf("enter the row :");
    scanf("%d",&r);
    printf("enter the colunm :");
    scanf("%d",&c);
    printf("enter the all elements\n");
     int arr[r][c];
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i <c; i++)
    {
        for (int j = 0; j < c; j++)
        {
           printf("%d ",arr[i][j]);
        }

        printf("\n");
    }
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum+=arr[i][j];          
        }
        
    }
    printf(" the sum of the given matrix is %d",sum);
    return 0;
}
// todo page no 131;