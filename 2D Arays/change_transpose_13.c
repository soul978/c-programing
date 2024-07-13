//?write a program to print to change the given n*m matrix to its transpose
//? without using extra arrays change in same arrays 

#include<stdio.h>
int main(){
    int n;
    printf("enter the row and / columnn :");
    scanf("%d",&n);
    int arr[n][n];
    //?   input------------------------------------------
    for (int  i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           printf(" enter the elemnents of the arrays (%d %d)  =" ,i,j);
           scanf("%d",&arr[i][j]);
        }
        
    }
    //todo  transpose------------------------------------------
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        
    }
    //! output---------------------------------------
    for (int  i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
//!page no 132;