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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the elements of 1st matrix (%d %d) ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("\n");
    //? wave print
    //! 1 2 3 
    //! 6 5 4
    //! 7 8 9 
    for (int i = 0; i < m; i++)
    {
        if (i%2==0)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ",a[i][j]);
            }
        }
        else
        {
            for (int j = n-1; j >= 0; j--)
            {
                printf("%d ",a[i][j]);
            }
        }
        
        printf("\n");
    }
    
    return  0;
}