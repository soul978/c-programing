#include<stdio.h>
int main(){
    int n;
    printf("enter the row and column :");
    scanf("%d",&n);
    int arr[n][n];
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" enter the elements of the arrays (%d %d)   :",i,j);
            scanf("%d",&arr[i][j]);
            
        }
        
    }
    for (int  i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int a = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = a;

        
        }
    
    }
    for (int i = n; i < 0; i--)
    {
        for (int j = n; j <0; j--)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}