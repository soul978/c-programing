//? write a program to print the miltiplication of two matrix given by the user;
#include<stdio.h>
int main(){
    //? 1 2
    //? 3 4
    //? 5 6
    //! int m = 3;
    //! int n = 2;
    //! int a[m][n];-------------------------------for input
    int a[3][2] = {{1,2},{3,4},{5,6}};
    //! 1 2 3 4 
    //! 5 6 7 8 
    //* int p = 2;
    //* int q = 4;
    //* int b[p][q];--------------------------------for input
    int b[2][4] = {{1,2,3,4},{5,6,7,8}};
    //! res[m][q];----------------------------------------------------resultant;
    int res[3][4]; //?-----------------a rows and b column--------------
    //* multiplying
    int rc = 2;
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <4; j++)
        {  //? i row of a[][] and j column b[][]
            //?(a[i][0],a[i][1],a[i][2].....)* (b[0][j],b[1][j],b[2][j]......)
               res[i][j] = 0;
            for (int  k = 0; k < rc; k++)
            {
                res[i][j] += a[i][k]*b[k][j];
            }
        }
        
    }
    //? print res
    //!  11  14  17  20  
    //!  23  30  37  44  
    //!  35  46  57  68  

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d  ",res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
//? page no = 134 and 135;