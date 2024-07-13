// take input arrys
#include<stdio.h>
int main(){
    int r;
    int g=1;//! row values given its print row;
    printf("enter the number of rows :");
    scanf("%d",&r);
    int c;
    printf("enter the number of column :");  //? take input to the user
    scanf("%d",&c);
    int arr[r][c];
    for (int i = 0; i<r; i++)
    {
        for (int j = 0; j<c; j++)
        { 
            scanf("%d",&arr[i][j]);
            
        }
    }
     printf("\n");
    for (int i = 0; i<r; i++)  //* print the values of the given arrays elements
    {
        printf("         %d rows elemnets \n",g);
        g++;
        for (int j = 0; j<c; j++)
        {
           printf("(%d %d) is the elements of arrays : %d\n",i,j,arr[i][j]);
        }
    }    

    return 0;
}
