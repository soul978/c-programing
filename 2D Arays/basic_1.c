// introduction
#include<stdio.h>
int main(){// declearation of arrays

int arr[3][3] = {{1,2,3},{3,4,5},{4,5,6}}; // 2d arrays decleartion;

   //arr[0][0] = 1;
   //arr[0][1] = 2;
   //arr[1][0] = 3;
   //arr[1][1] = 4;

for (int  i = 0; i<=2; i++)
{
   for (int  j = 0; j<=2; j++)
   {
     printf("%d ",arr[i][j]);
   }
   
printf("\n");
}
    return 0;  
}  