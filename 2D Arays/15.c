//? dificult question
#include <stdio.h>
int main()
{
    //? first matrix
    int m;
    printf(" enter the row  of 1st matrix :");
    scanf("%d", &m);
    int n;
    printf("enter the column of 1st matrix :");
    scanf("%d", &n);
    int a[m][n];
    ///! input first matrix;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter the 1st matrix elements (%d %d):", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    //? 2nd  matrix order
    int p;
    printf("enter the row of 2nd matrix :");
    scanf("%d", &p);
    int q;
    printf("enter the column of 2nd matrix :");
    scanf("%d", &q);
    int b[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("enter the 2st matrix elements (%d %d):", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    //? check
    int res[m][q];
    if (n != p) //! a ka column and b ka row
    {
        printf(" the matrix canot br multiplied :");
    }
    else
    { //? multiplication

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                //! 1 row of a j column  of b
                for (int k = 0; k < n; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
    printf("\n");
    //! print
    printf(" the resultant matrix is :\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//? page no = 134 and 135;
//! main formula is res [i][j] = a[i][k]*b[k][j]
//? a column = b row-------------------hona chahiye