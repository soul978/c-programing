//!write a program to add two matrix
#include<stdio.h>
int main(){
    int arr[2][2] = {3,4,5,6};
    int brr[2][2] = {3,9,8,6};
    printf("\n");
    int a[2][2];
    for (int i = 0; i<2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            a[i][j] = arr[i][j] + brr[i][j];
        }
        
    }
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//? page no 131;
//!uper question do it without using wxtra variables: