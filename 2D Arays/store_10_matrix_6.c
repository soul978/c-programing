//? write  aprogram to store 10 at every index of 2d matrix within 5 row 5 column.
#include<stdio.h>
int main(){
    int arr[5][5] = {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
    for (int i = 0; i <5; i++)
    {
       for (int  j = 0; j <5; j++)
       {
          printf("%d ",arr[i][j]);
       }
       
    printf("\n");
    }
    return 0;
}
//?page no 131