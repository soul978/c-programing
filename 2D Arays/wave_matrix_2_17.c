//! wave print 1;
#include<stdio.h>
int main(){
    int m;
    printf("enter the row :");
    scanf("%d",&m);
    int n;
    printf("enter the column :");
    scanf("%d",&n);
    int a[n][m];
    //? 1 2 3        
    //? 4 5 6    
    //? 7 8 9   

     //? to form

       //? wave print
     //! 7 2 9 
     //! 4 5 6
     //! 1 8 3   
    for (int i = 0; i<n; i++)
    {
        for (int j= 0; j<m; j++)
        {
            printf("enter the elements of the arrays(%d %d) :",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
   for (int i = 2; i>-1; i--){
    for (int j = 0; j < m; j++)
    {
      if (j==0 || j%2==0)
      {
         printf("%d",a[i][j]);
      }
      else
      {
        printf("%d",a[2-i][j]);
      }
      
    }
    printf("\n");
   } 
    
   
      
    return  0;
}
//? try run its 