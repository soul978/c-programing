//?given an n*n matrix 'a' print all elements of the matrix in spiral order;

//? 1 2 3 4
//? 5 6 7 8
//? 9 10 11 12
#include<stdio.h>
int main(){
    int m;
    printf("enter the row :");
    scanf("%d",&m);
    int n;
    printf("enter the column :");
    scanf("%d",&n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the elements (%d %d) :",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    int tnf = m*n;
    int count = 0;
    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;
   while (count<tnf)
   {//!print the print minimum row
         if (count>=tnf) break;
      for (int j = minc; j <=maxc; j++)
      {
        printf("%d ",a[minr][j]);
        count++;
      }
      minr++;
       
      if (count>=tnf) break;
      
      //! printf the maximum column
      for (int i = minr; i <=maxr; i++)
      {
         printf("%d ",a[i][maxc]);
         count++;
      }
      maxc--;
      
       if (count>=tnf) break;
      //! print maximum row
      for (int j = maxc; j >=minc; j--)
      {
         printf("%d ",a[maxr][j]);
         count++;
      }
      maxr--;
       
       if (count>=tnf) break;
      //! print minimum column
      for (int i = maxr; i >=minr; i--)
      {
        printf("%d ",a[i][minc]);
        count++;
      }
      minc++;
      
   }
    return 0;
}