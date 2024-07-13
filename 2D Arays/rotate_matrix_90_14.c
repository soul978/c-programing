//! write a program to rotate a matrix 90% clockwise.(leecode - 48);
#include<stdio.h>
int main(){
    int n;
    printf("enter the row and column  :");
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the elements in the arrays  (%d %d)  :",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for (int i = 0; i <n; i++)
    {
        for (int j = i; j <n; j++)
        {
           int a = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = a;
        }
        
    }
    for (int i = 0; i <n; i++) //? only reverse  the row or rotate the values; 
    {
        int j=0;
        int k = n-1;
        while (j<k)
        {//?  swape arr[i][j] and arr[i][k]
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
        
    }
    printf("\n");
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
//! page no 133;