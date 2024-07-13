//? write a program to store roll number and marks obtain 
//?by 4 students side by side in a matrix,
//!try it code is not compleated
#include<stdio.h>
int main(){
    int arr[4][2] = {76,80,57,81,40,90,21,95};
    for (int i = 0; i<4; i++)
    {
       for (int j = 0; j<2; j++)
       {
          printf("(%d %d)%d ",i,j,arr[i][j]);
       }
       printf("\n");
   //  }
   //  printf("\n");
   //  for (int i = 0; i < 4; i++)
   //  {
      //   for (int j = 0; j < 2; j++)
      //   {
         //   printf("(%d %d) is the element of the arrays :%d",arr[i][j]);
      //   }
      // printf("\n"); 
   }
       
    return 0;
}
//! page no 130;