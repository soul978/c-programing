bb//? find out the maximun element & min elemnents in a 2d arrays .
// !and also index of max elemnets ;
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[3][3] = {2,3,4,5,6,7,9,5,7};
   int max = INT_MAX;  int min = INT_MIN;
    for (int  i = 0; i <3; i++)
    {
        for (int j =0; j <3; j++)
        {
            if (min<arr[i][j]  )
            {
              min = arr[i][j];
                           
            }
                    
        }
    }
    printf("\n");
    for (int  i = 0; i <3; i++)
    {
        for (int j =0; j < 3; j++)
        {
            if (max>arr[i][j])
            {
                max = arr[i][j];
                printf("element index is (%d %d)   ",i,j);
            }
            
        }
    }
printf("And maximum element values is %d \n",min);

 printf("And minimum element values is %d ",max);
 
    return 0;
}

//?page no 131;