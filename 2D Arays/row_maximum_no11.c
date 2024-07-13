//? give a matrix having 0-1 only,find the row with the maximum number of 1's.
#include<stdio.h>
int main(){
    int arr[3][4] = {{1,0,1,1},{0,1,0,1},{1,1,1,1}};
    //? 1 0 1 1
    //! 0 1 0 1
    //? 1 1 1 1
    int maxcount = 0;
    int index = -1;
    for (int  i = 0; i <3; i++)
    {  int count = 0;
        for (int  j = 0; j <4; j++)
        {
           if (arr[i][j]==1)
           {
              count++;
           }
            
        }
        if (maxcount<count)
        {
            maxcount=count;
            index = i;
        }
        printf("\n");
    }
    printf(" The sum of the given matrix is %d",index);
    return 0;
}
///!page no 131;