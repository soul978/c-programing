//?write a program to print the transpose of the matrix entered by the user and also store (lectcode 867);
#include<stdio.h>
int main(){
    int r;
    printf("enter the row :");
    scanf("%d",&r);
    int c;
    printf("enter the column :");
    scanf("%d",&c);
    int arr[r][c];
    for (int  i = 0; i < r; i++)
    {  
       
       for (int j = 0; j <c; j++)
       { 
         printf(" enter thye elemnents of the arrays (%d %d)  =" ,i,j);
          scanf("%d",&arr[i][j]);
       }
       
    }
    //! 1 2 3
    //! 4 5 6

    //? 1 4 
    //? 2 5  // print this number;
    //? 3 6 

    printf("\n");
    int brr[c][r];
    for (int i = 0; i <c; i++)  //! r2 to covert  c=3  
    { 
        for (int j = 0; j <r; j++) //? r2
        { 
           //printf("%d ",arr[j][i]);      //? converted in transpose.     
            brr[i][j]=arr[j][i];//* it help to store the elements in the brr;
        }
        printf("\n");
    }
    //?  print brr
    for (int i = 0; i<c; i++)
    {
        for (int j = 0; j<r; j++)  //todo (this is store value)
        {
            printf("%d ",brr[i][j]);//? store value printed;
        }
        printf("\n");
    }
      
    return 0;
}


// todo  page no 132;